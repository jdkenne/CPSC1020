#include "BookList.h"

// Using vector list initialization within class ctor list initialization
BookList::BookList(): books{}
{

}

    // If a book with the same ID is not already in the vector, inserts
    // the given book into the vector(not in the appropriate order) and returns
    // true.  If there is already a book in the vector with the same ID
    // then the vector is not changed and false is returned.

bool BookList::addBook(Book *b)
{
	if(search(b->getTitle()) != nullptr)
	{
		return false;
	}
	else
	{
 	  books.emplace_back(b);
      return true;
    }
    return false;
}

// Searches the vector for a book with the given book ID.  If the
// book is found, it is returned; if it is not found, nullptr is returned.
Book* BookList::search(string title)
{

    auto result=std::find_if(books.begin(), books.end(),
	[title](const Book* e) { if(e==nullptr) return false; return e->getTitle() == title; });
	if(result != books.end())
	{
	  //std::cout << "found" << '\n';
	  //std::cout << "Found book with ID " << (*result)->getID() << endl;
    }
    else
    {
		//std::cout << "not found " << endl;
        return nullptr;
	}
	return (*result);
}



void BookList::print(fstream& f)
{
  unsigned int i;
  std::sort(books.begin(), books.end(), ComparatorByID());
  for(i=0; i < books.size(); ++i)
  {
	  books.at(i)->printBook(f);
  }
}
    // Prints out the vector of books to standard output.  The books are
    // printed in order of book ID (from smallest to largest), one per line

vector<Book*> BookList::getBooks() const
{
	return books;
}

BookList::~BookList()
{
   for (auto& p : books)
   {
	     delete p;
   }
   books.clear();
}
