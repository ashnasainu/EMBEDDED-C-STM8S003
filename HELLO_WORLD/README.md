# LCD Interfacing with STM8S003F3P6TR (4-bit Mode)

This project shows how to connect a 16x2 LCD to the STM8S103F3P6TR microcontroller using 4-bit mode. The LCD displays the message **"HELLO WORLD"**.

## 🔌 LCD Pin Connections

| LCD Pin | STM8S Pin |
|---------|-----------|
| RS      | PA1       |
| EN      | PA2       |
| DB4     | PD1       |
| DB5     | PD2       |
| DB6     | PD3       |
| DB7     | PD4       |

## ⚙️ Tools Used

- STM8S103F3P6
- ST Visual Develop (STVD)
- Cosmic C Compiler
- ST-Link V2 Programmer

## 🚀 How to Run

1. Open the project in **STVD**.
2. Compile using **Cosmic C**.
3. Flash to STM8 using **ST-Link V2**.
4. Power the board – LCD will show "HELLO WORLD".

