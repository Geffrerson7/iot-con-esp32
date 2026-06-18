#include <DHTesp.h>

const int DHT_PIN = 15;
const int FAN_PIN = 18;

const float TEMP_THRESHOLD = 30.0;

DHTesp dhtSensor;

void setup() {

  Serial.begin(115200);

  pinMode(FAN_PIN, OUTPUT);

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  delay(2000);

  Serial.println("Sistema de control de ventilador iniciado");
}

void loop() {

  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  float temperature = data.temperature;

  Serial.println("------ Lectura ------");

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature > TEMP_THRESHOLD) {

    digitalWrite(FAN_PIN, HIGH);

    Serial.println("Ventilador: ON");

  } else {

    digitalWrite(FAN_PIN, LOW);

    Serial.println("Ventilador: OFF");
  }

  Serial.println("---------------------");

  delay(2000);
}