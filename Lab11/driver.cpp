#include "Book.h"
#include "BookList.h"
#include <iostream>
#include <fstream>

using namespace std;


void checkArguments(int args);
void isOpen(fstream& f, char* argv);
void readData(BookList& books, fstream& f);

int main(int argc, char *argv[])
{

      checkArguments(argc);
      fstream in(argv[1], ios::in);
      isOpen(in, argv[1]);
      fstream out(argv[2], ios::out);
      isOpen(out, argv[2]);


       BookList allBooks;
       readData(allBooks,in);

	   out << "Number of books in the list: " << allBooks.getBooks().size() << endl << endl;


	   out << "Information of books alphabetically sorted by their Title " << endl;
	   allBooks.print(out);



	  return 0;
}

void readData(BookList& books, fstream& in)
{


  string bTitle;
  string first, last, isbn;
  int year;
  double rating;
  bool success;

  while(!in.eof())
  {
    string s;
    getline(in, s);
    bTitle = s;
    getline(in,s);
    first = s;
    getline(in,s);
    last = s;
    in >> rating;
    in >> year;
    in.ignore();
    getline(in,s);
    isbn = s;
    in.ignore();


    Person p(last, first);
    success = books.addBook(new Book(bTitle,p,rating,year,isbn));
    if(!success) cout << "Adding book not successful" << endl;
  }

}
void checkArguments(int args)
{
	/*Check to determine if the appropriate number of files were passed to the
		   *command line.*/
	if(args< 3)
	{
		cout << "Command line error: <executable> <input> <output>\n exiting:\n";
		exit(-1);
	}

}
void isOpen(fstream& f, char* argv)
{
   string str = argv;
   if(!f.is_open())
   {
           cout << str << " did not not open!" << endl;
           exit(-1);
    }
}

