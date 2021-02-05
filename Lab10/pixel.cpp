/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/
#include "pixel.hpp"


Pixel::Pixel(unsigned char r, unsigned char g , unsigned char b) {
  this->blue = b;
  this->red = r;
  this->green = g;
}

void Pixel::setR(unsigned char coloR) {
  red = coloR;
}

void Pixel::setG(unsigned char colorG) {
  green = colorG;
}

void Pixel::setB(unsigned char colorB) {
  blue = colorB;
}

Pixel Pixel::getPixel() const {
  return Pixel(red, green, blue);
}

unsigned char Pixel::getR() const {
  return red;
}

unsigned char Pixel::getB() const {
  return blue;
}

unsigned char Pixel::getG() const {
  return green;
}

void Pixel::writePixel(ofstream& output) {
  output << red << green << blue;
}

Pixel Pixel::readPixel(ifstream& input) {
  input >> red >> green >> blue;
  return Pixel(red, green, blue);
}
