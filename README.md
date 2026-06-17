# IoT con ESP32

## Descripción

Repositorio de proyectos prácticos desarrollados con ESP32 enfocados en Internet de las Cosas (IoT), monitoreo remoto, automatización y comunicación entre dispositivos.

El objetivo de este repositorio es documentar el aprendizaje y la implementación de soluciones basadas en ESP32 utilizando sensores, actuadores, conectividad Wi-Fi y protocolos de comunicación comúnmente utilizados en aplicaciones industriales e IoT.

## Objetivos de Aprendizaje

* Comprender el funcionamiento del ESP32.
* Implementar comunicación Wi-Fi en sistemas embebidos.
* Integrar sensores y actuadores con aplicaciones IoT.
* Desarrollar APIs y servicios para dispositivos conectados.
* Aplicar conceptos de monitoreo remoto y automatización.
* Documentar proyectos de ingeniería utilizando buenas prácticas.

## Tecnologías Utilizadas

* ESP32 DevKit V1
* Arduino Framework
* C/C++
* Wi-Fi
* HTTP
* JSON
* APIs REST
* MQTT (próximamente)
* Git
* GitHub
* Wokwi Simulator

## Estructura del Repositorio

```text
iot-con-esp32/
│
├── 01-monitoreo-temperatura/
├── 02-control-de-ventilador/
├── 03-dashboard-web/
├── 04-control-remoto-led/
├── 05-api-rest-esp32/
│
├── docs/
│   ├── esp32-introduccion.md
│   ├── wifi-y-redes.md
│   └── arquitectura-iot.md
│
└── README.md
```

## Proyectos

### 01 - Monitoreo de Temperatura

Lectura de temperatura y humedad utilizando un sensor DHT22 conectado a un ESP32.

**Conceptos aplicados:**

* Sensores digitales
* Comunicación GPIO
* Monitoreo ambiental
* Serial Monitor

---

### 02 - Control Automático de Ventilador

Sistema automatizado que activa un actuador cuando la temperatura supera un umbral configurado.

**Conceptos aplicados:**

* Automatización básica
* Lógica de control
* Sensores y actuadores
* Sistemas embebidos

---

### 03 - Dashboard Web

Servidor web embebido en el ESP32 para visualizar información de sensores desde un navegador.

**Conceptos aplicados:**

* Servidor HTTP
* Interfaces web
* Monitoreo remoto
* IoT

---

### 04 - Control Remoto de LED

Control de dispositivos desde una interfaz web utilizando el ESP32 como servidor.

**Conceptos aplicados:**

* IoT
* Control remoto
* Redes TCP/IP
* Automatización

---

### 05 - API REST con ESP32

Exposición de datos de sensores mediante endpoints REST utilizando formato JSON.

**Conceptos aplicados:**

* APIs REST
* JSON
* Integración de sistemas
* Comunicación máquina a máquina

## Aplicaciones Industriales

Los conceptos desarrollados en este repositorio pueden aplicarse en:

* Monitoreo de temperatura y humedad.
* Agricultura inteligente.
* Domótica.
* Industria 4.0.
* Monitoreo de activos.
* Sistemas HVAC.
* Centros de datos.
* Automatización industrial.
* Telemetría y supervisión remota.

## Competencias Desarrolladas

* Programación de microcontroladores.
* Redes y conectividad Wi-Fi.
* Sistemas IoT.
* Integración hardware-software.
* Desarrollo de APIs.
* Automatización de procesos.
* Diseño de sistemas embebidos.
* Documentación técnica.
