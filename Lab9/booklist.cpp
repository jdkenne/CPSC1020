#include "BookList.h"

using namespace std;

//Reserves space for the book
BookList::BookList(int size) {
  books.reserve(size);
}

bool BookList::addBook(Book *b) {
	for(unsigned int i = 0; i < books.size(); i++) {
  		if( b->getID() == books[i]->getID() ) {
    			books.emplace_back(b);
    			return false;
  		} else {
			books.emplace_back(b);
			return true;
		}
	}
}

/*Searches the book vector to see if the book you input exists*/
Book* BookList::search(int bookID) {

  for(unsigned int i = 0; i < books.size(); i++) {
      if(books.at(i)->getID() == bookID) {
        return books.at(i);
      } else {
        continue;
      }
  }
  return nullptr;

}

//Prints the books by year
bool BookList::printBooksByYear(int year) {
  bool found = false;
  for(unsigned int i = 0; i < books.size(); i++) {
    if(books[i]->getYear() == year) {
      cout << books[i]->print() << endl;
      found = true;
    }
  }
  return found;
}

//Allows for changing the info of a book
bool BookList::updateBook(int ID, int year, double rating) {
  for(unsigned int i = 0; i < books.size(); i++) {
    if((books[i]->getID() == ID) && (books[i]->getYear() == year) && (books[i]->getRating() == rating)) {
      return true;
    }
  }
  return false;
}

//Calculates the average ratings of the books
double BookList::calculateAverageRating() {
  double rating = 0;
  for(unsigned int i = 0; i < books.size(); i++) {
    rating += books[i]->getID();
  }
  rating = rating / books.size();
  return rating;
}

//Removes a book
void BookList::removeBook(int bookID) {
  int deleteBook = 0;
  cout << "Enter the ID of the book you wish to delete: " << endl;
  cin >> deleteBook;
  for(unsigned int i = 0; i < books.size(); i++) {
    if(deleteBook == books.at(i)->getID() ) {
      delete books[i];
      books.erase(books.begin()+i);
    }
  }

}

//Prints the books
void BookList::print() {
  ComparatorByID compare;
  sort(books.begin(), books.end(), compare);
  for(unsigned int i = 0; i < books.size(); i++) {
    cout << books[i]->print();
  }

}

//Creates the book vector
vector<Book*> BookList::getBooks() const {
  return books;

}

//Deallocates memory
BookList::~BookList() {
    for(unsigned int i = 0; i < books.size(); i++) {
      delete books[i];
    }

    books.clear();
}
