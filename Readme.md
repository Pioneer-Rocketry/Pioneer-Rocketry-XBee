#Pioneer Rocketry XBee [![Build Status](https://travis-ci.org/Pioneer-Rocketry/Pioneer-Rocketry-XBee.svg?branch=master)](https://travis-ci.org/Pioneer-Rocketry/Pioneer-Rocketry-XBee)


The Pioneer Rocketry XBee project is a lightweight library that offers ease of use with XBee devices. 

PRXBee currently offers: 
* Serial Read/Write support
* Cross platform support - compiles on the most popular Arduino devices, and fully utilizes all Serial ports. 
* Concurrent design - No busy waiting. Just call xbee->Update() to read and write to the XBee device. 

PRXBee plans to offer: 
* Easy to use text based UI support - For readable logging output to XCTU
* Command triggers - Set commands that can be sent from XCTU in order to trigger events


