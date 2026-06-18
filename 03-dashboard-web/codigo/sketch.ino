#include <WiFi.h>
#include <WebServer.h>
#include <DHTesp.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const int DHT_PIN = 15;

DHTesp dhtSensor;

WebServer server(80);

void handleRoot() {

  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  String html = R"(
  <!DOCTYPE html>
  <html>
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="refresh" content="5">
      <title>Dashboard IoT</title>

      <style>
          body{
              font-family: Arial;
              text-align:center;
              margin-top:50px;
          }

          .card{
              width:300px;
              margin:auto;
              padding:20px;
              border-radius:10px;
              box-shadow:0 0 10px rgba(0,0,0,0.2);
          }
      </style>
  </head>

  <body>

      <div class="card">

          <h1>Dashboard IoT</h1>

          <h2>Temperatura</h2>
          <p>)";

  html += String(data.temperature);

  html += R"( °C</p>

          <h2>Humedad</h2>
          <p>)";

  html += String(data.humidity);

  html += R"( %</p>

      </div>

  </body>
  </html>
  )";

  server.send(200, "text/html", html);
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

  server.on("/", handleRoot);

  server.begin();

  Serial.println("Servidor web iniciado");
}

void loop() {
  server.handleClient();
}