/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/
#include "functions.hpp"


int main(int argc, char* argv[]) {

  ifstream inFile;
  ofstream outFile;
  inFile.open(argv[1]);
  outFile.open(argv[2]);
  int check = true;
  Pixel* thePix;
  if(check == checkFile(inFile)) {
    checkArguments(argc);
    Header theHead;
    theHead.readHeader(inFile);
    int size = theHead.getHeight() * theHead.getWidth();

    //Allocates memory for a 1D array of pixels
    thePix = new Pixel[size];

    //Reads in the pixels
    for(int i = 0; i < size; i++) {
      Pixel temp = Pixel();
      thePix[i] = temp.readPixel(inFile);
    }

    HFlip(theHead, thePix);
    theHead.writeHeader(outFile);

    //Writes the pixels to the output file
    for(int i = 0; i < size; i++) {
      thePix[i].writePixel(outFile);
    }
  }

  //Frees memory for the 1D array
  delete [] thePix;

  inFile.close();
  outFile.close();
  return 0;
}
