# Monitoreo de Temperatura y Humedad con ESP32

## Descripción

Proyecto IoT desarrollado con ESP32 y sensor DHT22 para monitorear variables ambientales en tiempo real. El sistema captura datos de temperatura y humedad, mostrándolos a través del monitor serial para su supervisión y análisis.

Este proyecto sirve como introducción al uso de sensores ambientales con ESP32 y constituye la base para sistemas de monitoreo remoto y automatización industrial.

## Objetivo

Implementar un sistema de monitoreo ambiental utilizando un ESP32 y un sensor DHT22 para obtener mediciones periódicas de temperatura y humedad.

## Componentes Utilizados

* ESP32 DevKit V1
* Sensor DHT22
* Wokwi Simulator

## Funcionamiento

El ESP32 realiza lecturas periódicas del sensor DHT22 y muestra los valores obtenidos en el monitor serial.

Proceso:

1. Inicialización del ESP32.
2. Configuración del sensor DHT22.
3. Lectura de temperatura.
4. Lectura de humedad.
5. Visualización de resultados.
6. Repetición continua del ciclo de monitoreo.

## Conexiones

| DHT22 | ESP32  |
| ----- | ------ |
| VCC   | 3V3    |
| DATA  | GPIO15 |
| GND   | GND    |

## Diagrama

![Circuito ESP32 DHT22](../screenshot.png)

## Simulación en Wokwi

La simulación completa se encuentra disponible en:

```text
https://wokwi.com/projects/467120941402273793
```

## Código

El código fuente se encuentra en:

```text
codigo/sketch.ino
```

## Resultado Esperado

```text
Sistema de monitoreo iniciado...

Temperatura: 25.40 °C
Humedad: 60.50 %

---------------------

Temperatura: 25.70 °C
Humedad: 61.00 %
```

## Conceptos Aplicados

* ESP32
* Sensores digitales
* Monitoreo ambiental
* Internet de las Cosas (IoT)
* Lectura de datos en tiempo real
* Comunicación mediante GPIO
* Sistemas embebidos

## Aplicaciones Industriales

* Monitoreo de almacenes
* Centros de datos
* Sistemas HVAC
* Agricultura inteligente
* Invernaderos
* Control ambiental en laboratorios
* Monitoreo de salas de equipos
* Sistemas de supervisión remota

## Tecnologías Utilizadas

* ESP32
* Arduino Framework
* C/C++
* DHT22
* Wokwi
* Git
* GitHub

## Estructura del Proyecto

```text
01-monitoreo-temperatura/
│
├── codigo/
│   └── sketch.ino
│
├── docs/
│   └── README.md
│
├── screenshot-circuito.png
│
└── README.md
```

## Mejoras Futuras

* Visualización mediante pantalla OLED.
* Dashboard web embebido.
* Publicación de datos mediante API REST.
* Integración con MQTT.
* Almacenamiento de datos históricos.
* Monitoreo remoto desde dispositivos móviles.

## Autor

Gefferson Casasola

Ingeniero Electrónico | Desarrollador Backend
