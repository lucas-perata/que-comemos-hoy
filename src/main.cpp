#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>
#include <Adafruit_BMP085.h>
#include <Adafruit_AHTX0.h>
#include <PickFood.h>
#include <Ds1302.h>

// Configuración OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1 // No se usa pin de reset
#define SCREEN_ADDRESS 0x3C // Dirección I2C del OLED

// Pines I2C para ESP8266
#define SDA_PIN 4 // GPIO4 (D2)
#define SCL_PIN 5 // GPIO5 (D1)

// Inicialización de la pantalla OLED
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Inicialización del sensor BMP180
Adafruit_BMP085 bmp;

// Inicialización del sensor HT10 (si aplica)
Adafruit_AHTX0 aht;  

// VARIABLES GLOBALES
int ganas_de_cocinar;


// TIEMPO 
Ds1302 rtc(15, 12, 13);


// FUNCIONES 
void welcome_message(); 
void setRTCTime() {
  Ds1302::DateTime dt;
  dt.year = 2025;
  dt.month = 01;
  dt.day = 06;
  dt.hour = 17;
  dt.minute = 31;
  dt.second = 0;
  rtc.setDateTime(&dt);
}

void setup() {
  // Iniciar comunicación serial
  Serial.begin(115200);
  delay(1000); // Espera para estabilizar

  Serial.println("Inicializando I2C...");
  
  // Inicializar I2C en los pines definidos
  Wire.begin(SDA_PIN, SCL_PIN);
  Serial.println("I2C inicializado");

  // Inicializar la pantalla OLED
  Serial.println("Inicializando OLED...");
  if (!display.begin(SCREEN_ADDRESS, true)) {
    Serial.println(F("Error: Inicialización de SH1106 fallida"));
    while (1); // Detener si falla la inicialización
  }
  Serial.println(F("SH1106 Inicializado Correctamente"));

  // Configurar la pantalla OLED
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  display.setCursor(0, 0);
  display.println("OLED Inicializado");
  display.display();

  // Inicializar el sensor BMP180
  Serial.println("Inicializando BMP180...");
  if (!bmp.begin()) {
    Serial.println(F("Error: Inicialización de BMP180 fallida"));
    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(0, 10);
    display.println("BMP180 Error");
    display.display();
    while (1); 
  }
  Serial.println(F("BMP180 Inicializado Correctamente"));

  if (!aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT10 or AHT20 found");

  rtc.init();
  setRTCTime();
}

void loop() {
  float temp = bmp.readTemperature();
  float pressure = bmp.readPressure();
  sensors_event_t humidity, temps;
  aht.getEvent(&humidity, &temps);

  // TIEMPO 
  Ds1302::DateTime now; 
  rtc.getDateTime(&now); 
  int last_second = 0; 

  

  // Mostrar datos en la pantalla OLED
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Temp: " + String(temp, 1) + " C");
  display.setCursor(0, 10);
  display.println("Presion: " + String(pressure / 100.0, 1) + " hPa");
  display.setCursor(0, 20);
  display.println("Humedad: " + String(humidity.relative_humidity) + "%");
  display.setCursor(0, 30); 
  display.println("Ganas de cocinar: " + String(ganas_de_cocinar));
  display.setCursor(0, 40);
  display.println("Hora: " + String(now.hour) + ":" + String(now.minute));

  display.display(); 



  // Button Pressed MAIN 
  // Llama función para calcular la recomendación 
  //ProcessData();

  delay(2000); 
}