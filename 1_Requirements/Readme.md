# Requirements

## Introduction
* The purpose of the project is to build a DC to DC Boost Converter based on Atmega328 microcontroller. Basically, DC-DC converters are devices which change one level of direct current/ voltage to another (either higher or lower) level.
# Basic Circuit Diagram

![image](https://user-images.githubusercontent.com/94169022/144378559-ea1df82a-338a-4724-ace8-c7f0ed7611f1.png)

* When a circuit increases the DC voltage to a higher level, it is called Boost Converter. When a circuit decreases DC voltage to a lower level, it is called buck converter. Since a boost converter converts the DC voltage to the higher voltage level, it is also known as a step-up converter. For boosting the voltage signal a regulator circuit is required which can step up the input voltage signal. 
 
## Components Used
1.  Voltage Source
2.  ADC
3.  AVR Atmega 328 Microcontroller

## Software Used
1.  SimulIDE(tried)
2.  Visual Studio Code

## Cost and Feature
The cost of the hardware and software design is fixed and one-time investment only.

The features of this Converter can perform 
1.  Converts variable DC to Fixed DC Voltage.
2.  It saves many high-cost application oriented hardwares from damages.
3.  It overcomes power dissipation.


## SWOT Analysis

### Strength
1.  It provides technique to extend potential from partly reduced cell potential.
2.  It is available as whole hybrid circuit element and requires very few additional components.

### Weaknesses
1.  Switching converters are prone to noise.
2.  Choppers are inadequate due to unsteady voltage and current supply.


### Opportunities
1. The output is well organized as positive or negative.
2. Battery space can be reduced by using a converter

### Threats
1.  They are expensive as an external circuit is required.

## 4W's and 1H

### Why
1. Efficiency may be lower at lower power outputs, where the amount of power required to power the circuit is comparable to the load power.
2. To avoid internal power supply failures.

### Where
1.  It can be operated for any electronic equipments based on their needs.
2.  Boost converters are often used in power supplies for white LEDs, battery packs for electric automobiles, and many other applications.

### Who
1.  It can be used by engineers in the manufacturing industries.
2.  People who spend their times with electronic equipments like laptops, mobilephones etc.

### When
1.  For varying variable voltage to fixed voltage.
2.  A Scientists in their inventions at the period of research.

### How
1.  Giving different input voltage we can get their desired output voltage.
2.  DC-DC converters are high-frequency power conversion circuits that use high-frequency switching and inductors, transformers, and capacitors to smooth out switching noise into regulated DC voltages

## Detail requirements
### High Level Requirements
| ID | Description | Status |
|----|-------------|--------|
| HLR_1 | Control Unit | Implemented |
| HLR_2 | Input Unit | Implemented |
| HLR_3 | Output Unit | Implemented |
| HLR_4 | Software Design | Implemented |

### Low Level Requirements
| ID | Description | HLR ID | Status |
|----|-------------|--------|--------|
| LLR_1 | AVR Atmega 328 Microcontroller | HLR_1 | Implemented |    
| LLR_2 | Voltage Source | HLR_2 | Implemented |
| LLR_3 | Load| HLR_3 | Implemented |
| LLR_4 | Visual Studio Code & Simulide | HLR_4 | Implemented |
