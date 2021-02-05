#ifndef BOOKLIST_H
#define BOOKLIST_H

#include "Book.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;


class ComparatorByID
{

  public:

    bool operator() (Book *a, Book *b)
    {
      return a->getID() < b->getID();
    }
};
class BookList {

  public:

    BookList(int size);
    // Constructor for the class to initialize the list.

    bool addBook(Book *b);
    // If a book with this ID is not already in the list, insert
    // the given book into the list in the appropriate place and return
    // true.  If there is already a book in the list with the same ID
    // then the list is not changed and false is returned.

    Book* search(int bookID);
    // Searches the list for a book with the given book ID.  If the
    // book is found, it is returned; if it is not found, NULL is returned.

    bool printBooksByYear(int year);
    // Searches the list for a book for a given year.  If a
    // book is found, it is printed; if it is not found, false is returned.

    bool updateBook(int ID, int year, double rating);
    //Updates a book, returns true if bookID to be updated is found, fale otherwise

    double calculateAverageRating();
    //Calculates average rating for all the books in the list

    void removeBook(int bookID);
	    // Searches the list for a book with the given bookID.  If the
	    // book is found, the book is removed from the vector;
    // if no book is found with the given ID, NULL is returned.

    void print();
    // Prints out the list of books to standard output.  The books are
    // printed in order of book ID (from smallest to largest), one per line

    vector<Book*> getBooks() const;

    ~BookList();

  private:

    // Since Listnodes will only be used within the SortedList class,
    // we make it private.
    vector<Book*> books;

};

#endif
