/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>
#include "pixel.hpp"
#include "header.hpp"



void checkArguments(int);
bool checkFile(ifstream&);
void HFlip(Header, Pixel**);
void HFlip(Header, Pixel*);
void HFlip(Header, vector<Pixel> &);
void HFlip(Header, vector<vector<Pixel> > &);


#endif
