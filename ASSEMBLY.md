# Montage — T.E.A.M. Blaster Nano V1

## ⚠️ JST-XH Polung

> **Wichtig beim Selbst-Crimpen oder Umstecken fertiger Kabel.**

Aus PCB-Routing-Gründen sind die JST-XH-Stecker auf dieser Platine
teilweise **umgekehrt zur üblichen Konvention** belegt.

### Pinbelegung Platinenseite

| Stecker | Funktion        | Pin 1              | Pin 2            |
|---------|-----------------|--------------------|------------------|
| **J2**  | Li-Ion Akku     | VBAT+ (rot)        | GND (schwarz)    |
| **J3**  | externe LED     | LED− (Kathode)     | LED+ (Anode)     |
| **J4**  | Taster          | GND-               | TASTER Signal    |
| **J5**  | Lautsprecher    | SPK−               | SPK+             |

### ⚠️ Pflicht-Check vor erstem Einschalten

1. Multimeter auf DC-Spannungsmessung (Bereich 20 V)
2. Akku in **J2** einstecken
3. Rote Messspitze an **J2 Pin 1 (VBAT+)**,
   schwarze Messspitze an **J2 Pin 2 (GND)**
4. Anzeige muss **zwischen +3,0 V und +4,2 V** liegen
5. **Bei negativem Vorzeichen: Akku sofort abziehen — Polung falsch**

#### Folgen einer Verpolung an J2

- Schutzbeschaltung (**DW01A + FS8205A**) wird zerstört
- Akkuzelle kann dauerhaft Kapazität verlieren
- Im schlimmsten Fall: **Zellenbrand / Gasausdehnung**
