/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/
#include "header.hpp"


Header::Header(string m, int w, int h, int mv) {
  this->magic = m;
  this->width = w;
  this->height = h;
  this->maxVal = mv;
}


void Header::setMagic(string test) {
  magic = test;
}

void Header::setWidth(int w) {
  width = w;
}

void Header::setHeight(int h) {
  height = h;
}

string Header::getMagic() const {
  return magic;
}

int Header::getWidth() const {
  return width;
}

int Header::getHeight() const {
  return height;
}

int Header::getMVal() const {
  return maxVal;
}

void Header::readHeader(ifstream& input) {
  input >> magic >> width >> height >> maxVal;
}

void Header::writeHeader(ofstream& output) {
  output << magic << endl << width << " " << height << " " << maxVal << endl;
}
