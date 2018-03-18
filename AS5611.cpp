/***********************************************************
FILE:       AS5611.cpp
VERSION:    0.0.1
PURPOSE:    7-Segment Display for Arduino

DATASHEET: http://www.electronicoscaldas.com/datasheet/GNS-5611-Series_G-NOR.pdf

***********************************************************/


#include "AS5611.h"

void segment::clearAll(int* setup) {
    for (int i = 0; i < 8; i++) {
        pinMode(setup[i], OUTPUT);
        digitalWrite(setup[i], LOW);
    }
}


void segment::setNum(int* setup, int num) {
    int patterns[10][8] = {
        {1,1,1,1,1,1,0,0},
        {0,1,1,0,0,0,0,0},
        {1,1,0,1,1,0,1,0},
        {1,1,1,1,0,0,1,0},
        {0,1,1,0,0,1,1,0},
        {1,0,1,1,0,1,1,0},
        {1,0,1,1,1,1,1,0},
        {1,1,1,0,0,0,0,0},
        {1,1,1,1,1,1,1,0},
        {1,1,1,1,0,1,1,0}
    };

    for (int i = 0; i < 8; i++) {
        pinMode(setup[i], OUTPUT);
        if (patterns[num][i]==1) {
            digitalWrite(setup[i], HIGH);
        }
        else {
            digitalWrite(setup[i], LOW);
        }
    }
}
