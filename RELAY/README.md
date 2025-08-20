# STM8S – Relay ON and Blink

This project controls a relay connected to the **STM8S103F3P6TR** microcontroller (pin PA2).  
The relay can be turned ON, OFF, or blinked with a delay.

## What It Does
- Sets PA2 as output for relay control  
- Turns relay **ON**  
- Turns relay **OFF**  
- Blinks relay in a loop with delay  

## Tools Used
- STM8S103F3P6TR  
- ST Visual Develop (STVD)  
- Cosmic C Compiler  
- ST-Link V2 Programmer  
- Relay Module (5V)  

## How to Run
1. Open the code in **STVD**  
2. Build using **Cosmic C**  
3. Flash the code using **ST-Link V2**  
4. Connect relay module:  
   - **IN → PA2**  
   - **VCC → 5V**  
   - **GND → GND**  
5. Power the board – relay will blink or switch ON/OFF depending on the code section used  
