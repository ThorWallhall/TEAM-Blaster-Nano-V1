// This file is part of the T.E.A.M. Blaster Nano V1 project 
// Copyright (c) 2026 T.E.A.M. - for your fandom All rights reserved.
// This project is licensed under the MIT License - see LICENSE file for details.
// Author: T.E.A.M. - for your fandom
// This file is the main entry point for the T.E.A.M. Blaster Nano V1 firmware.
// It initializes the hardware and starts the main loop of the program.
// Note: This code is written in C++11 and is intended to run on an Arduino Nano with an ATmega328P microcontroller.
// Include the Arduino library for basic functions and definitions.
// Note: The Arduino library provides functions for digital and analog I/O, timing, and other basic operations.
// Note: The Arduino library is included by default in the Arduino IDE, but it must be explicitly included in PlatformIO projects.
// Date: 2026-04-16

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySoftwareSerial(10, 11); // RX, TX pins for the DFPlayer Mini
DFRobotDFPlayerMini myDFPlayer;

#define PIN_TASTER 3
#define PIN_LED 5

int flashtime = 350; // Flash time in milliseconds

void setup() {
  // Initialize the software serial communication for the DFPlayer Mini.
  mySoftwareSerial.begin(9600);
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.volume(28); // Set volume to maximum (0-30)

  // Set the pin modes for the button and LED.
  pinMode(PIN_TASTER, INPUT_PULLUP); // Button connected to pin 3 with internal pull-up resistor
  pinMode(PIN_LED, OUTPUT); // LED connected to pin 5

  // short LED flash to indicate that the setup is complete
  digitalWrite(PIN_LED, HIGH);
  delay(flashtime);
  digitalWrite(PIN_LED, LOW);
}

void loop() {
  // Check if the button is pressed (active LOW)
  if (digitalRead(PIN_TASTER) == LOW) {
    // Play the sound file "1.mp3" from the DFPlayer Mini
    myDFPlayer.play(1); // Play the first track on the SD card

    // Flash the LED while the sound is playing
      digitalWrite(PIN_LED, HIGH);
      delay(flashtime);
      digitalWrite(PIN_LED, LOW);
      // delay(flashtime);
  }
}