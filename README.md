# PIR Motion Security System with Audible Alarm

## Description
A simple embedded security system that uses a PIR sensor to detect human movement. When motion is detected, a red LED lights up and a piezo buzzer plays a 800 Hz alarm tone. The system is simulated on Arduino Uno using Tinkercad Circuits.

## Features
- Real‑time motion detection (PIR sensor)
- Visual alarm (red LED)
- Audible alarm (800 Hz tone via `tone()`)
- Serial monitor output for debugging

## Components
| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| PIR motion sensor (HC-SR501) | 1 |
| Red LED | 1 |
| Resistor 220Ω | 2 |
| Piezo buzzer (passive) | 1 |
| Jumper wires | 6+ |

## How to Run
1. Open the `.ino` file in Arduino IDE or Tinkercad.
2. Connect components as shown in the schematic (screenshots in `/Documentation/Screenshots`).
3. Upload the code (or start simulation in Tinkercad).
4. Trigger the PIR sensor (move the yellow test circle in front of it).
5. Observe LED and buzzer turning on.

## Project Files
- `/Code/` – Arduino sketch
- `/Documentation/` – Full written report and screenshots
- `/Presentation/` – PowerPoint slides used for defence
- `/Diagrams/` – Block diagram and electrical schematic

## Authors
- Nikola Borisov, Boyan Nikolov – GPCHE "Yordan Radichkov", 03/05/2026, Vidin
