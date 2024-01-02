/*
    Talos Electronics
    Ejemplo relevador de estado sólido SSR-40 DA
*/
int relayPin = 8;

void setup()
{
    // Configurar el pin de control del relé como salida
    pinMode(relayPin, OUTPUT);
}

void loop()
{
    // Encender el relé (activar la carga) durante 5 segundos
    digitalWrite(relayPin, HIGH);
    delay(5000); // Esperar 5 segundos

    // Apagar el relé (desactivar la carga) durante 5 segundos
    digitalWrite(relayPin, LOW);
    delay(5000); // Esperar 5 segundos
}
