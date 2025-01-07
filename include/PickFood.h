struct Comida {
    const char* nombre; 
    int num_ingredientes; 
};

Comida recomendaciones_desayuno[] = {
    // Alta humedad, alta temperatura, alta presión
    {"Yogur con granola y frutas frescas", 6},                // 0
    {"Smoothie de frutas tropicales", 5},                     // 1
    {"Ensalada de frutas frescas con menta", 6},              // 2

    // Alta humedad, alta temperatura, baja presión
    {"Sandía fresca con limón", 3},                            // 3
    {"Batido de frutas y jengibre", 6},                       // 4
    {"Tortitas de avena y plátano", 7},                       // 5

    // Alta humedad, baja temperatura, alta presión
    {"Tostadas integrales con queso crema y miel", 4},        // Simple
    {"Avena caliente con canela y manzana", 6},               // Menos simple
    {"Panqueques con miel y nueces", 5},                       // Compleja

    // Alta humedad, baja temperatura, baja presión
    {"Té chai con muffins caseros", 7},                        // Simple
    {"Sopa de avena y leche tibia", 5},                        // Menos simple
    {"Tarta de manzana casera", 8},                           // Compleja

    // Baja humedad, alta temperatura, alta presión
    {"Tostadas con mantequilla de maní y plátano", 4},        // Simple
    {"Smoothie de mango y coco", 5},                           // Menos simple
    {"Wrap ligero de vegetales asados", 7},                   // Compleja

    // Baja humedad, alta temperatura, baja presión
    {"Ensalada de frutas frescas", 6},                         // Simple
    {"Jugo de zanahoria, naranja y jengibre", 4},             // Menos simple
    {"Bowl de quinoa con aguacate y pollo", 8},               // Compleja

    // Baja humedad, baja temperatura, alta presión
    {"Huevos revueltos con espinaca y queso", 5},             // Simple
    {"Tostadas francesas con jarabe de arce", 6},              // Menos simple
    {"Frittata de verduras al horno", 8},                      // Compleja

    // Baja humedad, baja temperatura, baja presión
    {"Tostadas con mantequilla de manzana", 5},                // Simple
    {"Sopa de quinoa y vegetales", 6},                         // Menos simple
    {"Panqueques de avena y chocolate caliente", 7},           // Compleja
};

Comida recomendaciones_almuerzo[] = {
    // Alta humedad, alta temperatura, alta presión
    {"Ensalada de garbanzos con tomate y pepino", 5},           // Simple
    {"Tazón de quinoa con pollo y vegetales", 6},               // Menos simple
    {"Tacos de pescado con salsa de mango", 7},                 // Compleja

    // Alta humedad, alta temperatura, baja presión
    {"Wrap de pollo y verduras", 5},                             // Simple
    {"Arroz con mariscos", 7},                                  // Menos simple
    {"Curry de vegetales con arroz basmati", 8},                // Compleja

    // Alta humedad, baja temperatura, alta presión
    {"Sopa de lentejas", 6},                                    // Simple
    {"Pasta con salsa de tomate y albahaca", 7},                // Menos simple
    {"Risotto de champiñones", 8},                              // Compleja

    // Alta humedad, baja temperatura, baja presión
    {"Ensalada de pollo al limón", 6},                          // Simple
    {"Tortilla española", 7},                                   // Menos simple
    {"Guiso de verduras y quinoa", 8},                          // Compleja

    // Baja humedad, alta temperatura, alta presión
    {"Hamburguesa de pollo a la parrilla", 6},                  // Simple
    {"Ensalada César con pollo a la parrilla", 7},             // Menos simple
    {"Pasta fría con pesto y tomates secos", 8},                // Compleja

    // Baja humedad, alta temperatura, baja presión
    {"Ensalada de atún", 5},                                    // Simple
    {"Bowl de arroz con verduras salteadas", 6},                // Menos simple
    {"Tortas de arroz con guacamole y pollo", 8},              // Compleja

    // Baja humedad, baja temperatura, alta presión
    {"Sándwich de jamón y queso", 5},                           // Simple
    {"Pasta al horno con carne y salsa", 7},                    // Menos simple
    {"Estofado de carne y papas", 8},                           // Compleja

    // Baja humedad, baja temperatura, baja presión
    {"Sopa de pollo con fideos", 6},                            // Simple
    {"Guiso de garbanzos con espinacas", 7},                   // Menos simple
    {"Lasagna de verduras", 8},                                 // Compleja
};

Comida recomendaciones_merienda[] = {
    // Alta humedad, alta temperatura, alta presión
    {"Frutas frescas con yogurt", 5},                           // Simple
    {"Tostadas de aguacate con tomate", 6},                     // Menos simple
    {"Galletas de avena y pasas", 7},                           // Compleja

    // Alta humedad, alta temperatura, baja presión
    {"Batido de frutas tropicales", 5},                          // Simple
    {"Pan de banana casero", 6},                                 // Menos simple
    {"Tarta de frutas con crema", 8},                           // Compleja

    // Alta humedad, baja temperatura, alta presión
    {"Galletas de chocolate", 6},                               // Simple
    {"Sopa de calabaza con pan", 7},                             // Menos simple
    {"Crêpes de manzana y canela", 8},                          // Compleja

    // Alta humedad, baja temperatura, baja presión
    {"Chocolate caliente", 5},                                   // Simple
    {"Panqueques con miel", 6},                                  // Menos simple
    {"Budín de pan con frutas", 8},                             // Compleja

    // Baja humedad, alta temperatura, alta presión
    {"Barritas de granola", 5},                                  // Simple
    {"Smoothie verde de espinaca", 6},                          // Menos simple
    {"Tostadas francesas con frutas", 8},                       // Compleja

    // Baja humedad, alta temperatura, baja presión
    {"Ensalada de frutas", 5},                                   // Simple
    {"Galletas de mantequilla de maní", 6},                     // Menos simple
    {"Pastel de zanahoria", 8},                                  // Compleja

    // Baja humedad, baja temperatura, alta presión
    {"Yogur con miel y nueces", 5},                             // Simple
    {"Tarta de queso con frutas", 7},                            // Menos simple
    {"Muffins de arándano", 8},                                  // Compleja

    // Baja humedad, baja temperatura, baja presión
    {"Frutos secos y semillas", 5},                              // Simple
    {"Té de hierbas con galletas", 6},                           // Menos simple
    {"Pudding de chía con frutas", 8},                           // Compleja
};

Comida recomendaciones_cena[] = {
    // Alta humedad, alta temperatura, alta presión
    {"Ensalada de pollo a la parrilla", 5},                     // Simple
    {"Pasta con salsa de tomate y albahaca", 6},                // Menos simple
    {"Salmón al horno con esparragos", 8},                      // Compleja

    // Alta humedad, alta temperatura, baja presión
    {"Wraps de lechuga con pollo", 5},                          // Simple
    {"Quinoa con vegetales asados", 7},                         // Menos simple
    {"Tacos de carne con guacamole", 8},                        // Compleja

    // Alta humedad, baja temperatura, alta presión
    {"Sopa de verduras", 6},                                    // Simple
    {"Pasta al horno con verduras", 7},                          // Menos simple
    {"Guiso de lentejas con chorizo", 8},                       // Compleja

    // Alta humedad, baja temperatura, baja presión
    {"Tortilla de patatas", 6},                                 // Simple
    {"Pescado al vapor con vegetales", 7},                      // Menos simple
    {"Ragú de carne con puré de papas", 8},                     // Compleja

    // Baja humedad, alta temperatura, alta presión
    {"Pizza con vegetales", 6},                                 // Simple
    {"Hamburguesa de pavo con ensalada", 7},                   // Menos simple
    {"Paella de mariscos", 8},                                  // Compleja

    // Baja humedad, alta temperatura, baja presión
    {"Ensalada de atun", 5},                                    // Simple
    {"Fajitas de pollo con pimientos", 7},                      // Menos simple
    {"Cazuela de pollo al horno", 8},                            // Compleja

    // Baja humedad, baja temperatura, alta presión
    {"Sandwich de pollo con ensalada", 5},                      // Simple
    {"Canelones rellenos de carne", 7},                         // Menos simple
    {"Estofado de ternera con verduras", 8},                    // Compleja

    // Baja humedad, baja temperatura, baja presión
    {"Sopa de pollo con fideos", 6},                            // Simple
    {"Guiso de garbanzos con espinacas", 7},                   // Menos simple
    {"Lasaña de carne", 8},                                     // Compleja
};

//TODO: Incorporar ganas de cocinar en el filtro

String ProcessData(float humedad, float temperatura, float presion, uint8_t time, int motivacion)
{
    Comida* comidas; 
    int option; 
    // Filtro desayunos 
    if(time >= 5 && time < 12)
    {
        comidas = recomendaciones_desayuno;
    } 
    
    else 

    // Filtro almuerzos 
    if(time >= 12 && time < 15)
    {
        comidas = recomendaciones_almuerzo; 
    } else 

    // Filtro meriendas 
    if (time > 15 && time < 20)
    {
        comidas = recomendaciones_merienda; 
    } else 

    // Filtro cenas 
    if(time > 20 && time < 23)
    {
        comidas = recomendaciones_cena;
    } 
    else 
    {
        return "ERROR: Fuera de horario."; 
    }

    if (humedad > 60) { // Alta humedad
        if (temperatura > 25) { // Alta temperatura
            if (presion > 1013) { // Alta presión
            // 0 - 1 - 2
            if(motivacion < 35)
            {
                return comidas[0].nombre; 
            } 
            else if (motivación > 35 && motivacion < 70)
            {
                return comidas[1].nombre; 
            }
            else 
            {
                return comidas[2].nombre;
            }
            } else { // Baja presión
            // 3 - 4 - 5 
                return comidas[3].nombre; 
            }
        } else { // Baja temperatura
            if (presion > 1013) { // Alta presión
            // 6 - 7 - 8
                 return comidas[7].nombre; 
            } else { // Baja presión
            // 9 - 10 - 11
                return comidas[9].nombre;
            }
        }
    } 
    
    else { // Baja humedad
        if (temperatura > 25) { // Alta temperatura
            if (presion > 1013) { // Alta presión
            // 12 - 13 - 14
                return comidas[12].nombre;
            } else { // Baja presión
            // 15 - 16 - 17
                return comidas[15].nombre;
            }
        } else { // Baja temperatura
            if (presion > 1013) { // Alta presión
            // 18 - 19 - 20
                return comidas[17].nombre;
            } else { // Baja presión
            // 21 - 22 - 23
                return comidas[20].nombre;
            }
        }
        }

    return "ERROR"; 
}

/* int random(int min, int max) 
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL) ); 
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
} */
