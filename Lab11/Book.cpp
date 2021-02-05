#include "Book.h"


Book::Book(): title("Harry Potter & the Goblet of Fire"), author(), rating(5.0), year(2000), isbn("1234")
{

	  /*Use setter from the person class to set the name*/

}
Book::Book(string t, Person aut, double rate, int yr, string isbn2 ): title(t), author(aut.getLastName(), aut.getFirstName()), rating(rate), year(yr), isbn(isbn2)
{


}

string Book::getTitle() const
{
	return title;
}
int Book::getYear() const
{
	return year;
}
double Book::getRating() const
{
	return rating;
}

string Book::getISBN() const
{
	return isbn;
}

void Book::printBook(fstream& out) const
{




 out << endl << "Book Title" << endl << title << endl;


   out << "Year: " << endl << year << endl;
   out << "Rating:" << endl << fixed  << showpoint <<  setprecision(2) << rating << endl;
   out<< "Books ISBN: " << endl << isbn << endl;

}
Book::~Book()
{
}
