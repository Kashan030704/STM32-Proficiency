# Embedded Systems Projects — STM32F411RE

Hardware and firmware projects built on the STM32 Nucleo-F411RE using C and the HAL library, covering analog signal processing, peripheral driver integration, and hardware isolation.

---

## Table of Contents
- [Smart Door Lock System](#smart-door-lock-system)
- [Heart Rate Monitor](#heart-rate-monitor)
- [Car Brake System](#car-brake-system)
- [Industrial Acoustic Safety System](#industrial-acoustic-safety-system)
- [Project Doorbell](#project-doorbell)
- [Night Light](#night-light)
- [Thermometer](#thermometer)

---

## Smart Door Lock System
**Stack:** STM32F411RE, C, FreeRTOS, CMSIS-OS2, TIM2, PWM, UART, HC-SR04, SG90

Proximity-triggered door unlock system built on FreeRTOS with two concurrent tasks communicating via a message queue.

🎥 [Watch Demo]()

**Key Technical Decisions**
- Dual-task FreeRTOS architecture uses osMessageQueue for producer-consumer data passing between sensor and servo tasks
- TIM2 configured at 50Hz with 83 prescaler and ARR 19999 derived from 84MHz APB1 clock for hardware PWM servo control
- Integer-only distance formula eliminates floating point overhead on Cortex-M4
- UART2 streams real-time telemetry at 115200 baud over VCP for live debugging

---

## Heart Rate Monitor
**Stack:** STM32F411RE, C, HAL, I2C, ADC, KY039, SSD1306

Real-time BPM monitor using a KY039 PPG sensor with live output on an SSD1306 OLED over I2C.

🎥 [Watch Demo](https://youtube.com/shorts/rR6yja0OJjQ?feature=share)

**Key Technical Decisions**
- 20ms averaging window cancels 60Hz ambient light interference
- Physiological sanity window rejects readings outside 45–180 BPM
- 10-beat moving average for stable BPM output
- OLED throttled to every two heartbeats to keep CPU free for ADC sampling

---

## Car Brake System
**Stack:** STM32F411RE, C, HAL, I2C, TIM1, HC-SR04, SSD1306

Proximity alert system modelled after a car reverse sensor with live OLED telemetry and a two-stage buzzer alert.

🎥 [Watch Demo](https://youtube.com/shorts/U1f3LqJIAjc?feature=share)

**Key Technical Decisions**
- TIM1 with 83 prescaler generates 1MHz hardware clock for CPU-independent microsecond timing
- Resistor voltage divider safely interfaces 5V sensor signal with 3.3V MCU pins
- NPN transistor routes buzzer current from 5V rail protecting GPIO pins
- Dual acoustic alerts trigger at 20cm and 10cm thresholds

---

## Industrial Acoustic Safety System
**Stack:** STM32F411RE, C, HAL, UART, PWM, ADC

Noise monitoring system with synchronized LED and buzzer alerts to prevent auditory overexposure.

**Key Technical Decisions**
- PWM at 83 prescaler and 499 period generates stable 2kHz alarm signal
- NPN transistor isolates 5V buzzer from 3.3V logic rail
- Star-grounding layout eliminates LED flicker caused by buzzer ground bounce
- Single nested state machine as source of truth for all peripheral states

---

## Project Doorbell
**Stack:** STM32F411RE, C, HAL, GPIO, NPN BJT (S8050)

Transistor-driven doorbell isolating high-current buzzer from 3.3V MCU logic using an S8050 NPN BJT in saturation mode.

---

## Night Light
**Stack:** STM32F411RE, C, HAL, UART, ADC, LDR

Reads ambient lux via a 12-bit ADC on an LDR and automatically activates an LED when light drops below 2000 lux.

---

## Thermometer
**Stack:** STM32F411RE, C, HAL, UART, ADC, Thermistor

Reads thermistor voltage through a 12-bit ADC, converts to Celsius, and streams live temperature to PuTTY over UART.

---

*Developed alongside Electrical Engineering studies at the University of Waterloo.*
