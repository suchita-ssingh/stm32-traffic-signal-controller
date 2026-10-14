# STM32-traffic-signal-controller

## Overview
Real-time traffic signal controller featuring multi-LED state sequencing and precise timing loops on an STM32 Nucleo-C031C6 microcontroller.

*Key Features*:
- Simulates a standard 3-phase traffic control cycle .
- Configures digital GPIO pins as outputs for independent LED control.
- Implements deterministic timing intervals using delay routines to ensure smooth state transitions.

## Live Simulation
Test the interactive circuit directly in your browser:
[Run Wokwi Simulation](https://wokwi.com/projects/471320669457290241)

## Hardware Pin Mapping
- Green LED: Pin 13.
- Yellow LED: Pin 12.
- Red LED: Pin 11.

## Timing Sequence
- Green Light: Active for 5 seconds.
- Yellow Light: Active for 2 seconds.
- Red Light: Active for 5 seconds.

## Repository Structure
- `diagram.json` — Wokwi circuit schematic and pin wiring configuration.
- `sketch.ino` — C++ firmware managing GPIO output manipulation and timing loops.
