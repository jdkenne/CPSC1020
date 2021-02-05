#include "Person.hpp"

Person::Person():lastName(" "), firstName(" ")
{
}

Person::Person(string l, string f):lastName(l), firstName(f)
{

}

//Destructor
Person::~Person(){}

string Person::getLastName() {
  return lastName;
}

string Person::getFirstName() {
  return firstName;
}

void Person::printPerson(fstream& f) {
  f << lastName << " " << firstName << endl;
}
