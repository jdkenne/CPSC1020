#include "Book.h"

using namespace std;

//Assigns a default value
Book::Book(int ID, string title, int yr, double r) {
  this->bookID = ID;
  this->year = yr;
  this->rating = r;
  this->title = title;
}

//Gets book ID and return it
int Book::getID() const {
  return bookID;
}

//Returns book title
string Book::getTitle() const {
  return title;
}

//Return the year the book was printed
int Book::getYear() const {
  return year;
}

//Returns the rating for the book
double Book::getRating() const {
  return rating;
}

//Update info for the book
void Book::updateBook(int yr, double r)  {
  year = yr;
  rating = r;
}

//Prints the books
string Book::print() const {
  stringstream ss;
  ss <<  endl << endl;
  ss << bookID<< " " << year << " " << rating << " " << title << endl;

  return ss.str();
  }
