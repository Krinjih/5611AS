/***********************************************************
FILE:       AS5611.h
VERSION:    0.0.1
PURPOSE:    7-Segment Display for Arduino

DATASHEET: http://www.electronicoscaldas.com/datasheet/GNS-5611-Series_G-NOR.pdf

***********************************************************/



#ifndef AS5611_h
#define AS5611_h

#include "arduino.h"

class segment {
public:
    void clearAll(int*);
    void setNum(int*, int);
};

#endif
