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
    vector<vector<Pixel> > thePix;

    //Sizes the 2D vector
    thePix.resize(theHead.getHeight(), vector<Pixel>(theHead.getWidth()));

    //Reads in the pixels
    for(int i = 0; i < theHead.getHeight(); i++) {
	for(int j = 0; j <  theHead.getWidth(); j++) {
		thePix.at(i).at(j) = thePix.at(i).at(j).readPixel(inFile);
	}
    }

    HFlip(theHead, thePix);
    theHead.writeHeader(outFile);


    //Writes the pixels to the output file
    for(int i = 0; i < theHead.getHeight(); i++) {
      for(int j = 0; j < theHead.getWidth(); j++) {
        thePix.at(i).at(j).writePixel(outFile);
      }
    }

    //Clears the 2D vector
    for(int i = 0; i < theHead.getHeight(); i++) {
      thePix.at(i).clear();
    }
    thePix.clear();

    inFile.close();
    outFile.close();
  }
  return 0;
}
