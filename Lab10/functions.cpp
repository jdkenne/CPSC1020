
/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/

#include "functions.hpp"



void checkArguments(int numArgs) {
  if(numArgs != 3) {
    cout << "You did not enter the correct number of command line arguments!" << endl;
    exit(0);
  }
}

bool checkFile(ifstream& input) {
  bool check = true;
  if(check != input.is_open()) {
    cout << "Your file did not open successfully! Pls try again!" << endl;
    return false;
  }
  return true;
}

void HFlip(Header theHead, Pixel** thePix) {
    Pixel temp;
    for(int i = 0; i < theHead.getHeight(); i++) {
	     for(int j = 0; j < theHead.getWidth() / 2; j++) {
          temp = thePix[i][j];
          thePix[i][j] = thePix[i][theHead.getWidth() - j];
          thePix[i][theHead.getWidth() - j] = temp;
        }
    }
}

void HFlip(Header theHead, Pixel* thePix) {
  int size = theHead.getWidth() - 1;
  Pixel temp;
  for(int j = 0; j < theHead.getHeight(); j++) {
    for(int i = 0; i < (theHead.getWidth() / 2); i++) {
      temp = thePix[j * theHead.getWidth() + i];
      thePix[j * theHead.getWidth() + i] = thePix[j * theHead.getWidth() + size];
      thePix[j * theHead.getWidth() + size] = temp;
      size = size - 1;
    }
    size = theHead.getWidth() - 1;
  }
}

void HFlip(Header theHead, vector<Pixel> &thePix) {
  int size = theHead.getWidth() - 1;
  Pixel temp;
  for(int j = 0; j < theHead.getHeight(); j++) {
    for(int i = 0; i < (theHead.getWidth() / 2); i++) {
      temp = thePix.at(j * theHead.getWidth() + i);
      thePix.at(j * theHead.getWidth() + i) = thePix.at(j * theHead.getWidth() + size);
      thePix.at(j * theHead.getWidth() + size) = temp;
      size = size - 1;
    }
    size = theHead.getWidth() - 1;
  }
}

void HFlip(Header theHead, vector<vector<Pixel> > &thePix) {
  Pixel temp;
  for(int i = 0; i < theHead.getHeight(); i++) {
     for(int j = 0; j < theHead.getWidth() / 2; j++) {
        temp = thePix.at(i).at(j);
        thePix.at(i).at(j) = thePix.at(i).at(theHead.getWidth() - j - 1);
        thePix.at(i).at(theHead.getWidth() - j - 1) = temp;
      }
  }
}
