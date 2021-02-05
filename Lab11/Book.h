/*************************
Josh Kennerly
jdkenne
Lab 11
Section 03
Nushrat and Alex
**************************/

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <sstream>
#include <iomanip>
#include "Person.hpp"

using namespace std;

/*
 * Book class
 *
 * A Book object contains a book ID, publication year, and a rating.
 *
 */
class Book{

  public:


    Book();
    Book(string, Person, double, int, string );
    // Constructs a book with the given title,author, rating, year and isbn.

    // Accessors

    string getTitle() const;    // returns the title
    Person getAuthor() const;
    int getYear() const;        // returns the publication year
    double getRating() const;   // returns the rating

    string getISBN() const; // returns isbn

    // Methods

    void printBook(fstream& out) const; // print out the book information
                        // as ID title year rating

   //destructor
    ~Book();

  private:
    string title;
    Person author;
    double rating;
    int year;
    string isbn;
};

#endif
