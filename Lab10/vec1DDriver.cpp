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
  if(check == checkFile(inFile)) {
    checkArguments(argc);
    Header theHead;
    theHead.readHeader(inFile);
    vector<Pixel> thePix;
    int size = theHead.getWidth() * theHead.getHeight();

    //Sizes the vector
    thePix.resize(size);

    //Reads in the pixels
    for(int i = 0; i < size; i++) {
      Pixel temp = Pixel();
      thePix.at(i) = temp.readPixel(inFile);
    }

    HFlip(theHead, thePix);
    theHead.writeHeader(outFile);

    //Write the pixels to the output file
    for(int i = 0; i < size; i++) {
      thePix.at(i).writePixel(outFile);
    }

    thePix.clear();
    inFile.close();
    outFile.close();
  }
  return 0;
}
