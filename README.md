# T.E.A.M. Blaster Nano V1

**Open-source prop electronics kit for makers, cosplayers, and fandom builders.**  
**Open-Source-Elektronikkit für Maker, Cosplayer und Fandom-Bastler.**

[🇬🇧 English](#english) · [🇩🇪 Deutsch](#deutsch)

---

## English

### Overview

The T.E.A.M. Blaster Nano V1 is a compact all-in-one electronics board for
button-triggered sound and light effects in DIY props — fandom blasters,
sci-fi phasers, lightsabers and similar projects. A single button press plays
an audio sample through the onboard DFPlayer Mini while flashing an LED in sync.

### Features

- Button-triggered audio playback with synchronized LED effect
- Integrated Li-Ion battery charging over USB-C (**TP4056**)
- Battery protection circuit (**DW01A + FS8205A** dual MOSFET)
- Boost converter for a stable supply rail (**MT3608**)
- **ATmega328P-AU** microcontroller — Arduino Nano compatible
- Onboard USB-UART bridge (**CH340G**) — flash firmware directly via USB-C
- Compact form factor with JST-XH connectors for battery, speaker, button, LED

### Hardware

| Block               | Part                     | Package       |
|---------------------|--------------------------|---------------|
| Microcontroller     | ATmega328P-AU            | TQFP-32       |
| Audio player        | DFPlayer Mini (DFR0299)  | module        |
| Battery charger     | TP4056                   | SOIC-8-1EP    |
| Battery protection  | DW01A + FS8205A          | SOT-23-6 + TSSOP-8 |
| Boost converter     | MT3608                   | SOT-23-6      |
| USB-UART bridge     | CH340G                   | SOIC-16       |
| USB input           | USB-C (GCT USB4085)      | —             |

Full bill of materials in `Dokumentation/`.

### Repository Structure

```
├── Code T.E.A.M. - Blaster Nano V1/   → firmware (PlatformIO / Arduino)
├── Dokumentation/                     → BOM, datasheets
├── KiCAD/                             → schematic + PCB design files
├── ASSEMBLY.md                        → ⚠️ assembly & safety notes
└── README.md                          → this file
```

### Firmware

Written in C++11 for the Arduino framework. Builds with either the Arduino IDE
or PlatformIO.

Dependencies:

- `Arduino.h` *(core)*
- `SoftwareSerial.h` *(core)*
- `DFRobotDFPlayerMini` *(install via library manager)*

### ⚠️ Assembly

**Before first power-on, read [`ASSEMBLY.md`](ASSEMBLY.md).**
It contains critical polarity information for the JST-XH connectors —
wrong polarity can destroy the battery cell or the protection circuit.

### License

MIT License — see the `LICENSE` file for details.

### Author

T.E.A.M. — *for your fandom* · © 2026

---

## Deutsch

### Überblick

Der T.E.A.M. Blaster Nano V1 ist eine kompakte All-in-One-Elektronikplatine
für taster-ausgelöste Sound- und Lichteffekte in Eigenbau-Props — Fandom-Blaster,
Sci-Fi-Phaser, Lichtschwerter und ähnliche Projekte. Ein Tastendruck spielt ein
Audio-Sample über das integrierte DFPlayer-Mini-Modul und lässt synchron dazu
eine LED aufleuchten.

### Funktionen

- Taster-ausgelöste Audio-Wiedergabe mit synchronem LED-Effekt
- Integrierte Li-Ion-Akkuladung über USB-C (**TP4056**)
- Schutzschaltung für den Akku (**DW01A + FS8205A** Dual-MOSFET)
- Step-Up-Wandler für stabile Versorgungsspannung (**MT3608**)
- **ATmega328P-AU** Mikrocontroller — Arduino-Nano-kompatibel
- Integrierter USB-UART-Bridge (**CH340G**) — Firmware direkt über USB-C flashen
- Kompaktes Format mit JST-XH-Steckern für Akku, Lautsprecher, Taster, LED

### Hardware

| Block               | Bauteil                  | Gehäuse       |
|---------------------|--------------------------|---------------|
| Mikrocontroller     | ATmega328P-AU            | TQFP-32       |
| Audio-Player        | DFPlayer Mini (DFR0299)  | Modul         |
| Akku-Lader          | TP4056                   | SOIC-8-1EP    |
| Akku-Schutz         | DW01A + FS8205A          | SOT-23-6 + TSSOP-8 |
| Step-Up-Wandler     | MT3608                   | SOT-23-6      |
| USB-UART-Bridge     | CH340G                   | SOIC-16       |
| USB-Eingang         | USB-C (GCT USB4085)      | —             |

Die vollständige Stückliste liegt im Ordner `Dokumentation/`.

### Repository-Struktur

```
├── Code T.E.A.M. - Blaster Nano V1/   → Firmware (PlatformIO / Arduino)
├── Dokumentation/                     → Stückliste, Datenblätter
├── KiCAD/                             → Schaltplan + PCB-Entwurfsdaten
├── ASSEMBLY.md                        → ⚠️ Montage- & Sicherheitshinweise
└── README.md                          → diese Datei
```

### Firmware

Geschrieben in C++11 für das Arduino-Framework. Lässt sich sowohl mit der
Arduino IDE als auch mit PlatformIO bauen.

Abhängigkeiten:

- `Arduino.h` *(Kern)*
- `SoftwareSerial.h` *(Kern)*
- `DFRobotDFPlayerMini` *(über Library Manager installieren)*

### ⚠️ Montage

**Vor dem ersten Einschalten unbedingt [`ASSEMBLY.md`](ASSEMBLY.md) lesen.**
Dort stehen wichtige Polungshinweise zu den JST-XH-Steckern —
falsche Polung kann den Akku oder die Schutzschaltung zerstören.

### Lizenz

MIT-Lizenz — Details in der Datei `LICENSE`.

### Autor

T.E.A.M. — *for your fandom* · © 2026
