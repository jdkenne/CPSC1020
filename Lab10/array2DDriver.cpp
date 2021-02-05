/*************************
Josh Kennerly
jdkenne
Lab 10 
Section 003
Nushrat and Alex
*************************/
#include "functions.hpp"

int main(int argc, char* argv[])
{
  ifstream inFile;
  ofstream outFile;
  inFile.open(argv[1]);
  outFile.open(argv[2]);
  int check = true;
  if(check == checkFile(inFile)) {
    checkArguments(argc);
    Header theHead;
    theHead.readHeader(inFile);

    //Allocates memory for a 2D array of pixels
    Pixel** thePix;
    thePix = new Pixel*[theHead.getHeight()];
    for(int i = 0; i < theHead.getHeight(); i++) {
        thePix[i] = new Pixel[theHead.getWidth()];
    }

    //Reads in the pixels
    Pixel temp;
    for(int i = 0; i < theHead.getHeight(); i++) {
      for(int j = 0; j < theHead.getWidth(); j++) {
          thePix[i][j] = temp.readPixel(inFile);
      }
    }


    HFlip(theHead, thePix);
    theHead.writeHeader(outFile);

    //Writes the pixels to the output file
    for(int i = 0; i < theHead.getHeight(); i++) {
      for(int j = 0; j < theHead.getWidth(); j++) {
        thePix[i][j].writePixel(outFile);
      }
    }


    //Frees memory for the 2D array
    for(int i = 0; i < theHead.getHeight(); i++) {
      delete [] thePix[i];
    }
    delete [] thePix;

    inFile.close();
    outFile.close();
  }
  return 0;
}
