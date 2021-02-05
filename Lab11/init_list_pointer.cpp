#include <iostream>
#include <string>

using namespace std;
// This program illustrates aggregation, composition
// and object lifetimes.
/*We have multiple classes here Date -- Country -- Person*/

#include <iostream>
#include <string>
using namespace std;

class Date
{
  private:
    string month;
    int day, year;
    int personID; //ID of person whose birthday this is.
  public:
    /*This construct uses the initializer list to initialize all the private
     *class members*/
    Date(string m, int d, int y, int id):
    month(m), day(d), year(y), personID(id)
     {
        cout << "Date-Of-Birth object for person "
             << personID << " has been created.\n";
    }
   ~Date()
    {
        cout << "Date-Of-Birth object for person "
             << personID << " has been destroyed.\n";
    }
};

/*This is the country class. It tells us what country the person is from*/
 class Country
 {
   private:
     string name;
   public:
    Country(string name) : name(name)
    {

         cout << "A Country object has been created.\n";
    }
    ~Country()
     {
         cout << "A Country object has been destroyed.\n";
     }
 };
/*Person class has a Date member and a Country member.  Which makes sense
 *because a person will have a name, a birthday, an id and they live in some
 *country.  Notice Country is a pointer */
 class Person
 {
   private:
     string name;
     Date dateOfBirth;
     int personID; // Person identification number (PID)
     Country *pCountry;
    /*This constructor uses an initializer list rather than using a bunch of
     *setter functions.  Notice uniquePersonID uses the Person and the scope
     *operator. This because the uniquePersonID is a static variable.  This is
     *static in oder to prevent duplicate id numbers. */
   public:
      Person(string n, string month, int day, int year, Country *pC):
      name(n),
      dateOfBirth(month, day, year, Person::uniquePersonID),
      personID(Person::uniquePersonID),
      pCountry(pC)
      {
          cout << "Person object "
               << personID << " has been created.\n";
          Person::uniquePersonID ++;
      }
     ~Person()
      {
          cout << "Person object "
               << personID << " has been destroyed.\n";
      }
      static int uniquePersonID; // Used to generate PIDs
 };

 // Define the static class variable
 /*Remember this has to initialized outside the class.  It can be change within
  *the class but it has to be initialized outside the class.*/
 int Person::uniquePersonID = 1;

 int main()
 {
     // Create a Country object
     Country usa("USA");
     // Create a Person object dynamically allocating
     Person *p = new Person("Peter Lee", "January", 1, 1985, &usa);
     // Create another Person object
     Person p1("Eva Gustafson", "May", 15, 1992, &usa);

     cout << "Now there are two people.\n";
     // Delete the first person
     delete p;
     cout << "Now there is only one.\n";
     // The second person will go out of scope when main returns
     return 0;
 }
