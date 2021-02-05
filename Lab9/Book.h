#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

/*
 * Book class
 *
 * A Book object contains a book ID, publication year, and a rating.
 *
 */
class Book{

  public:

    //Book();
    // Constructs a default book with an ID of 0, year 0, and 0.0 rating.

    //Book(int ID);
    // Constructs a book with the given ID, 0 year, and 0.0 rating.

    Book(int ID = 0, string title = " ", int yr = 0, double r = 0.0);
    // Constructs a book with the given ID, year , and rating.

    // Accessors
    int getID() const;          // returns the book ID
    string getTitle() const;    // returns the title
    int getYear() const;        // returns the publication year
    double getRating() const;   // returns the rating

    // Methods
    void updateBook(int yr, double rating); // updates the year and rating for a book
    string print() const; // print out the book information
                        // as ID title year rating


  private:
    int bookID;
    string title;
    int year;
    double rating;
};

#endif
