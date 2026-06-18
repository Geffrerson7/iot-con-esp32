#include <DHTesp.h>

const int DHT_PIN = 15;

DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  delay(2000);

  Serial.println("Sistema de monitoreo iniciado...");
}

void loop() {

  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  if (isnan(data.temperature) || isnan(data.humidity)) {
    Serial.println("Error leyendo el DHT22");
    delay(2000);
    return;
  }

  Serial.print("Temperatura: ");
  Serial.print(data.temperature);
  Serial.println(" °C");

  Serial.print("Humedad: ");
  Serial.print(data.humidity);
  Serial.println(" %");

  delay(2000);
}