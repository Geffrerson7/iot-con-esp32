#include <WiFi.h>
#include <WebServer.h>
#include <DHTesp.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const int DHT_PIN = 15;

DHTesp dhtSensor;
WebServer server(80);

void handleSensor() {

  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  String json = "{";
  json += "\"temperature\":";
  json += String(data.temperature, 1);
  json += ",";
  json += "\"humidity\":";
  json += String(data.humidity, 1);
  json += "}";

  server.send(200, "application/json", json);
}

void setup() {

  Serial.begin(115200);

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  WiFi.begin(ssid, password);

  Serial.print("Conectando a WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi conectado");

  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  server.on("/api/sensor", handleSensor);

  server.begin();

  Serial.println("API REST iniciada");
}

void loop() {
  server.handleClient();
}