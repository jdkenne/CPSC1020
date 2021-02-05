#include "Book.h"
#include "BookList.h"
#include <fstream>

using namespace std;
int howMany(ifstream& input);

int main(int argc, char* argv[]) {

  if(argc != 2) {
    cout << "You did not enter the correct number of command line arguments";
    cout << endl;
  }

  ifstream inputFile(argv[1]);

  if(inputFile.fail()) {
    cout << "The file did not open. Ending program!";
    return -1;
  }
  int numBooks = howMany(inputFile);
  BookList books(numBooks);
  Book *test = new Book(2, "Harry Potter & The Prisoner of Azkaban", 1999, 6.9);
  cout << test->print();
  test->updateBook(2003, 9.9);
  cout << test->print();
  int readID;
  int readYear;
  double readStars;
  string readTitle;
  inputFile.clear();
  inputFile.seekg(0, inputFile.beg);
  for(int i = 0; i < numBooks; i++) {
    inputFile >> readID >> readYear >> readStars;
    getline(inputFile, readTitle);
    books.addBook(new Book(readID, readTitle, readYear, readStars));
  }

 for(int i = 0; i < numBooks; i++) {
	books.at(i)->print();
}
  

  cout << endl << "The average rating is: " << books.calculateAverageRating() << endl;

  inputFile.close();
  return 0;

  }

 int howMany(ifstream& input) {
   string line;
   int count = 0;
   while(getline(input, line)) {
     count++;
   }
   return count;

 }
