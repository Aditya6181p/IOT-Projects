# 🛠️ All-in-One Arduino Projects Repository

This repository is a comprehensive collection of fundamental Arduino projects. It covers a wide range of applications including sensor integration, visual outputs, audio alerts, and digital displays.

---

## 📂 Project Directory

| Filename | Description | Primary Component |
| :--- | :--- | :--- |
| `Tilt_sensor.ino` | Detects orientation changes using a digital tilt sensor. | Tilt Sensor |
| `blinking_led.ino` | Standard LED blink script with 1-second intervals. | LED |
| `breathing_led.ino` | Smooth fading "breathing" effect using PWM. | PWM LED |
| `passive_buzzer.ino` | Generates a frequency sweep/siren effect. | Passive Buzzer |
| `Active_buzzer.ino` | Produces rhythmic, fixed-frequency beeps. | Active Buzzer |
| `timer_7segement.ino` | 9-to-0 countdown timer with an end-of-timer buzzer alarm. | 7-Seg + Buzzer |
| `7_segment_display.ino` | Simple 0-9 digital counter implementation. | 7-Segment Display |
| `toggle_led.ino` | Alternating strobe effect between two LEDs. | 2x LEDs|
| `Detection_test_HCSR04.ino` | Object/Person detection system using ultrasonic waves[cite: 9]. | HC-SR04 Sensor |

---

## 🔌 GPIO Pin Connections

### **1. Sensors & Inputs**
*   **Tilt Sensor:** Connect to **Pin 2** (uses internal `INPUT_PULLUP`).
*   **Ultrasonic Sensor (HC-SR04):** 
    *   **Trig Pin:** **Pin 9**.
    *   **Echo Pin:** **Pin 10**.

### **2. Visual & Audio Outputs**
*   **Basic LED:** Connect anode to **Pin 2**.
*   **Breathing LED:** Connect anode to **Pin 3** (PWM Pin).
*   **Dual Flasher:** Connect LED 1 to **Pin 2** and LED 2 to **Pin 4**.
*   **Active Buzzer:** Connect to **Pin 2**.
*   **Passive Buzzer:** Connect to **Pin 3**.
*   **Countdown Buzzer:** Connect to **Pin 12** (used in `timer_7segement.ino`).

### **3. 7-Segment Display**
Segments **a, b, c, d, e, f, g** are connected to the following digital pins respectively:
*   **Pins: 2, 3, 4, 5, 6, 7, 8**.

---

## 📋 Technical Implementation

### **Ultrasonic Sensing**
The `Detection_test_HCSR04.ino` project calculates distance based on the speed of sound:
$$Distance = \frac{Duration \times 0.034}{2}$$
The system alerts "ALARM: A person is detected!" if an object comes within **100 cm**.

### **7-Segment Display Logic**
Digits are rendered using a common cathode map:
*   **0:** `{1, 1, 1, 1, 1, 1, 0}`
*   **1:** `{0, 1, 1, 0, 0, 0, 0}`

---

## 🚀 How to Use
1.  Open the desired `.ino` file in the **Arduino IDE**.
2.  Wire your components according to the **GPIO Pin Connections** section above.
3.  Upload the code to your Arduino board.
4.  For projects with Serial output (`Tilt_sensor.ino`, `Detection_test_HCSR04.ino`), open the **Serial Monitor** at **9600 baud**.
