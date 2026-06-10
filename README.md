**📡 Bluetooth Message Display on LCD using Arduino UNO**

A simple and beginner-friendly Arduino project that receives text messages via Bluetooth (HC-05 / HC-06) and displays them on a 16x2 LCD screen in real time.

**##✨ Features**
📱 Send message from mobile phone via Bluetooth
🔵 Wireless communication using HC-05 module
🖥️ Display received text on 16x2 LCD
⚡ Real-time message update
🧠 Beginner-friendly Arduino project


**##🧰 Components Required**
Arduino UNO
HC-05 Bluetooth Module
16x2 I2C LCD Display
Breadboard
Jumper wires
Android smartphone
USB cable for Arduino
🔌 Circuit Connections
📡 HC-05 Bluetooth Module
HC-05 Pin	Arduino Pin
VCC	5V
GND	GND
TXD	RX (D0)
RXD	TX (D1) ⚠️ (Use voltage divider)

**##⚠️ Important:**
HC-05 RX pin supports only 3.3V → use voltage divider (1kΩ + 2kΩ)

**##📺 16x2 I2C LCD**
LCD Pin	Arduino Pin
VCC	5V
GND	GND
SDA	A4
SCL	A5
**##📱 Mobile App Setup**

Use any Bluetooth terminal app:

##👉 Recommended App:**

Serial Bluetooth Terminal (Android)

**##Steps:**

Turn ON Bluetooth
Pair with HC-05
Default PIN: 1234 or 0000
Open app and connect
Type message and send

**##📊 Working Principle**
Mobile app sends text via Bluetooth
HC-05 receives data
Arduino reads serial data
LCD displays received message

**##Mobile Input:**

Hello Kiruba

**##LCD Output:**

Message:
Hello Kiruba

**##Hardware connection**

<img width="702" height="1600" alt="WhatsApp Image 2026-06-05 at 8 08 01 PM" src="https://github.com/user-attachments/assets/a5fdf9ff-5442-4115-ae8d-5ea90306a731" />

**##Output**

<img width="702" height="1600" alt="WhatsApp Image 2026-06-05 at 8 08 39 PM" src="https://github.com/user-attachments/assets/dc7f9b2e-8d11-464f-8b4e-0e5330dcacff" />

**##Demo video**

https://drive.google.com/file/d/19j_p32i0MDb8HZOg-rBciCZX_JDY4PAQ/view?usp=drivesdk

