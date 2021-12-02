# **M2-Embedded_DCtoDC_Converter**

## ***Direct Current to Direct Current Boost conversion of Closed Loop System***

The purpose of the project is to build a DC to DC Boost Converter based on Atmega328 microcontroller. Basically, DC-DC converters are devices which change one level of direct current/ voltage to another (either higher or lower) level.

![image](https://user-images.githubusercontent.com/94169022/144423516-ba68848f-7b55-469e-a7c4-ae55f50eb284.png)

![image](https://user-images.githubusercontent.com/94169022/144423644-d6b9bfe6-9f49-4515-bf37-b895c926825a.png)



A DC-to-DC boost converter circuit is a circuit that can convert a DC voltage into a larger DC voltage. So, for example, you may be able to convert a 5V DC voltage into 30V. A DC-to-DC converter works on the principle of an inductor primarily and a capacitor.


# Requirements

## Introduction
* The purpose of the project is to build a DC to DC Boost Converter based on Atmega328 microcontroller. Basically, DC-DC converters are devices which change one level of direct current/ voltage to another (either higher or lower) level.
# Basic Circuit Diagram

![image](https://user-images.githubusercontent.com/94169022/144378559-ea1df82a-338a-4724-ace8-c7f0ed7611f1.png)

* When a circuit increases the DC voltage to a higher level, it is called Boost Converter. When a circuit decreases DC voltage to a lower level, it is called buck converter. Since a boost converter converts the DC voltage to the higher voltage level, it is also known as a step-up converter. For boosting the voltage signal a regulator circuit is required which can step up the input voltage signal. 

## Working Principle
The working principle of the DC-to-DC converter is very simple. The inductor in the input resistance has an unexpected variation in the input current. If the switch is kept as high (on), then the inductor feeds the energy from the input and stores the energy in the form of magnetic energy.

![image](https://user-images.githubusercontent.com/94169022/144422712-6e7c4a72-4795-4675-92ba-8371c16193e8.png)

 
## Components Used
1.  Voltage Source
2.  Oscilloscope
3.  AVR Atmega 328 Microcontroller
4.  Metal Oxide Semiconductor Field Effect Transistor

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

# Folder Structure
|Folder|	Description|
|--|--|
1_Requirements|	Documents detailing requirements and research in this project
2_Design|	Documents specifying design details
3_Implementation|	All code and documentation
4_TestplanAndOutput|	Documents with test plans and outputs
5_Report|	Documentation of the all folders
6_Images|	All the output images of this project


## Contributors List and Summary
|PS No.|	Name|	Features|	Issuess Raised|	Issues Resolved|	Number of Test Cases|	Test Case Pass|
|--|--|--|--|--|--|--|
40021000|	Natarajan K | Nil | Nil | 3 | 3 |

## Challenges Faced and How Was It Overcame

Having some installation issues in SimulIDE and tried to overcame by troubleshooting videos.


# *DESIGN*


## *BEHAVIOUR DIAGRAM*
![Screenshot (130)](https://user-images.githubusercontent.com/94169022/144425309-79bee509-4605-4efb-ba47-baece707ef8a.png)



## *STRUCTURE DIAGRAM*
![IMG_20211202_152434](https://user-images.githubusercontent.com/94169022/144425958-6ba23e2f-df27-4026-aefb-f77934c7e649.jpg)




## *BLOCK DIAGRAM*
![IMG_20211202_152920](https://user-images.githubusercontent.com/94169022/144425807-6e068521-1c50-4af3-a598-64de95083e14.jpg)




## *SIMULATION DIAGRAM*
![image](https://user-images.githubusercontent.com/94169022/144426148-032d93a4-6c80-487d-9140-f5934a1e1c2b.png)




##  *BILL OF MATERIALS*

 * Avr Atmega 328 microcontroller
 * Voltage Source
 * Voltage Measurement


 
# *Communication Protocols*



#### UART  - TX & RX (2 devices)
* 2 Wire
* Individual clocks used by the both parties
* Standard speed (9600, 115200) - Baud rate
* Parity

## Wired
### Commonly used Serial Communciations in Embedded Systems


#### I2C - Inter IC  (Master & Slave), External Pull up resistors
* 2 wired
    * Serial Data
    * Serial Clock
* 7/9 bit Address for each entity
* Start - Data line going low, clock low
* Stop - Dataline going high, clock low
* 7 bit address + 1 bit of acknowledge
* 100k, 400K, 1.2M


#### SPI - Serial Programming Interface (Master and Slave)
* 3 + 1 wire
    * Master In Slave Out
    * Master out Slave In
    * Clock
    * Individual Chip select
* Max - Number GPIO's available CS pins
* Frequency - 1/3 of Operating 


## Wireless
* Bluetooth
* Wifi
* LORA
* RFID
* GSM


#### Factors to decide on which communication prototocol to select
* Frequency
* Data throughput
* Number of pins available 
* Type of devices which needs to talk
* Error detection (UART & I2C) capability


### Other serial Communciation
* SDIO - uSD
* HDMI
* Ethernet

# **SIMULATION DIAGRAM**

![image](https://user-images.githubusercontent.com/94169022/144426706-3b29df59-fbf6-405c-9b4c-d2b68e49b0cf.png)


# **RESULT**

![image](https://user-images.githubusercontent.com/94169022/144426605-9ed7f5f8-b2c3-48e6-904d-ed00461e74da.png)



