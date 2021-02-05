#ifndef BOOKLIST_H
#define BOOKLIST_H

#include "Book.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class ComparatorByID
{

  public:

    bool operator() (Book *a, Book *b)
    {
      return a->getTitle() < b->getTitle();
    }
};
class BookList {

  public:

    BookList();
    // Constructor for the class to initialize the list.

    bool addBook(Book *b);

    Book* search(string title);



    void print(fstream&);


    vector<Book*> getBooks() const;

    ~BookList();

  private:


    vector<Book*> books;

};

#endif