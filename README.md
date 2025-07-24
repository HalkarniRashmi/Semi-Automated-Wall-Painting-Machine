# Semi-Automated Wall Painting Machine

This project demonstrates a semi-automated wall painting machine designed and built using an Arduino Mega 2560 microcontroller. The machine is capable of performing vertical and horizontal movements to paint a wall section-wise based on a limit switch trigger.

## 🚀 Features

- **Automated Lift Mechanism**: Moves the paint sprayer up and down using relays.
- **Horizontal Movement**: Moves forward after completing a vertical stroke.
- **Limit Switch Triggered Operation**: Initiates a cycle of motions when the sensor is pressed.
- **Relay-Controlled Motor System**: Each movement is controlled via relays connected to actuators or motors.

## 🧠 Working Principle

When the limit switch is activated:
1. The lift moves **up**.
2. Then it moves **down**.
3. The sprayer moves **forward**.
4. The cycle repeats to cover the next portion of the wall.
If the limit switch is not pressed, all relays remain OFF and the system waits.

## 🔧 Hardware Components

- Arduino Mega 2560
- 3-Channel Relay Module
- Limit Switch (Connected to A0)
- Motors/Actuators for vertical and horizontal movements
- Power Supply
- Frame structure for wall painting setup

## 💡 Arduino Pin Configuration

| Function         | Arduino Pin |
|------------------|-------------|
| Limit Switch     | A0          |
| Lift Up Relay    | D10         |
| Lift Down Relay  | D9          |
| Forward Relay    | D8          |

## 📝 Code Overview

The machine continuously monitors the state of the limit switch. If triggered, it executes the following sequence:
- Lift up (5s)
- Pause (3s)
- Lift down (5s)
- Pause (3s)
- Move forward (2s)
- Pause (3s)
- Repeat the above sequence once more.




