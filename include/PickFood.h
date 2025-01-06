struct Comida {
    const char* nombre; 
    int num_ingredientes; 
};

Comida recomendaciones_desayuno[] = {
    // Alta humedad, alta temperatura
    {"Smoothie de frutas tropicales", 5},
    {"Yogur con granola y frutas frescas", 6},
    {"Tostadas con aguacate y limón", 4},

    // Alta humedad, baja temperatura
    {"Avena caliente con canela y manzana", 6},
    {"Panqueques con miel y nueces", 5},
    {"Chocolate caliente con croissants", 6},

    // Baja humedad, alta temperatura
    {"Batido de plátano y almendra", 5},
    {"Tostadas con mantequilla de maní y plátano", 4},
    {"Ensalada de frutas frescas", 6},

    // Baja humedad, baja temperatura
    {"Huevos revueltos con espinaca y queso", 5},
    {"Tostadas francesas con jarabe de arce", 6},
    {"Avena al horno con arándanos", 7},

    // Alta presión atmosférica
    {"Omelette con champiñones y queso", 6},
    {"Tostadas con mermelada casera", 4},
    {"Pan de plátano con café", 6},

    // Baja presión atmosférica
    {"Sopa de miso con tofu", 6},
    {"Panecillos de queso y hierbas", 7},
    {"Huevos pochados con tostadas integrales", 5}
};


String ProcessData(float hum, float temp, float press, int time)
{
    return "";
}