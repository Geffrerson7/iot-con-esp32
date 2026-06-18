# Dashboard Web con ESP32

## Descripción

Proyecto IoT desarrollado con ESP32 y sensor DHT22 para monitorear variables ambientales mediante una interfaz web accesible desde cualquier navegador conectado a la misma red.

El sistema actúa como un servidor web embebido, obteniendo datos de temperatura y humedad en tiempo real y mostrándolos en un dashboard web simple e intuitivo.

Este proyecto introduce conceptos fundamentales de Internet de las Cosas (IoT), comunicación Wi-Fi y desarrollo de aplicaciones web embebidas en microcontroladores.

---

## Objetivo

Implementar un dashboard web utilizando un ESP32 para visualizar en tiempo real la temperatura y humedad medidas por un sensor DHT22.

---

## Componentes Utilizados

- ESP32 DevKit V1
- Sensor DHT22
- Wokwi Simulator

---

## Funcionamiento

El ESP32 se conecta a una red Wi-Fi y ejecuta un servidor web local.

Cuando un usuario accede desde un navegador:

1. El ESP32 obtiene la temperatura y humedad del DHT22.
2. Genera dinámicamente una página HTML.
3. Envía los datos al navegador.
4. El dashboard se actualiza automáticamente cada 5 segundos.

---

## Arquitectura

```text
┌─────────────┐
│   DHT22     │
└──────┬──────┘
       │
       ▼
┌─────────────┐
│    ESP32    │
│ Web Server  │
└──────┬──────┘
       │ Wi-Fi
       ▼
┌─────────────┐
│ Navegador   │
│ Dashboard   │
└─────────────┘
```

---

## Conexiones

| DHT22 | ESP32 |
|--------|--------|
| VCC | 3V3 |
| DATA | GPIO15 |
| GND | GND |

---

## Diagrama

![Simulacion](./screenshot-circuito.png)

---

## Simulación en Wokwi

🔗 Simulación:

```text
https://wokwi.com/projects/467193697298021377
```

---

## Código

El código fuente se encuentra en:

```text
codigo/sketch.ino
```

---

## Dashboard Web

Ejemplo de visualización:

```text
Dashboard IoT

Temperatura: 26.4 °C

Humedad: 58 %
```

---

## Características

- Lectura de temperatura en tiempo real.
- Lectura de humedad en tiempo real.
- Servidor web embebido.
- Actualización automática del dashboard.
- Comunicación mediante Wi-Fi.
- Interfaz accesible desde navegador web.

---

## Conceptos Aplicados

- Internet de las Cosas (IoT)
- ESP32 Wi-Fi
- HTTP Server
- HTML y CSS
- Sensores digitales
- Comunicación TCP/IP
- Sistemas embebidos
- Monitoreo remoto

---

## Tecnologías Utilizadas

- ESP32
- Arduino Framework
- C/C++
- Wi-Fi
- HTTP
- HTML
- CSS
- DHT22
- Wokwi
- Git
- GitHub

---

## Aplicaciones Industriales

- Monitoreo de temperatura en centros de datos.
- Supervisión de almacenes.
- Agricultura inteligente.
- Invernaderos automatizados.
- Control ambiental en laboratorios.
- Sistemas HVAC.
- Industria 4.0.
- Telemetría y monitoreo remoto.

---

## Estructura del Proyecto

```text
03-dashboard-web/
│
├── codigo/
│   └── sketch.ino
│
├── screenshot-circuito.png
│
├── docs/
│   └── README.md
```

---

## Mejoras Futuras

- Integración con pantalla OLED.
- Dashboard con gráficos en tiempo real.
- API REST para consumo externo.
- Almacenamiento histórico de datos.
- Integración con MQTT.
- Publicación en la nube (AWS IoT, ThingsBoard, Blynk).
- Sistema de alertas por temperatura alta.

---
