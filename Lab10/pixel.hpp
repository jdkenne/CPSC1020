/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/
#ifndef PIXEL_H
#define PIXEL_H

#include <fstream>
#include <iostream>

using namespace std;

class Pixel
{
    private:
        unsigned char red, green, blue;

    public:
        Pixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        void setR(unsigned char);
        void setG(unsigned char);
        void setB(unsigned char);
        void setPixel(unsigned char, unsigned char, unsigned char);
        Pixel getPixel()const;
        unsigned char getR()const;
        unsigned char getG()const;
        unsigned char getB()const;
        void writePixel(ofstream&);
        Pixel readPixel(ifstream&);

};

#endif
