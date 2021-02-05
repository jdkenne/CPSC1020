#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <fstream>

using namespace std;

class Person{

  private:
        string lastName;
        string firstName;

  public:
        Person();
        Person(string, string);
        string getFirstName();
        string getLastName();
        void printPerson(fstream& f);
        ~Person();
};

#endif
