#include <iostream>
#include <string>
using namespace std;

class Date
{
	private:
		string month;
		int day, year;
		vector<int> myvec;
	/*Notice this uses the member initialization list and nothing in the
	 *body of the constructor.*/
	public:
		Date(string m, int d, int y) :
		month(m), day(d), year{y}, myvec{1,2,3} //memeber initialization list
		{
			cout<< "in Date's regular constructor\n";

		}
		~Date() {cout << "Date Destructor\n";}
		Date():month(12),day(
		{
			cout << "in Date's default constructor\n";
			month = " ";
			day = 0;
			year = 0;

		}

		void setMonth(string m)
		{
			cout << "in Date's setMonth\n";
			month = m;
		}
		string getMonth()
		{ cout << "in Date's getMonth\n";
			return month;
		}
};


/*This example uses initialization list to initialize the Date member
 *variables*/

class Person
{
	private:
		string name;
		Date dateOfBirth;
	/*This examples uses the member initialization list to initialize the
	 *varialbes in both the person class and the Date class.*/
	public:
		Person(string name, string month, int day, int year) :
			name(name),
			dateOfBirth(month, day, year)  //must be in order
		{
			cout << "Inside constructor\n";
			cout << name << endl;
		}
		~Person() {cout << "Person's destructor\n";}
		string getMonthP()
		{ cout << "inside person's getMonth\n";
			return dateOfBirth.getMonth();
		}
};


int main()
{
	Person p1 ("Yvon", "October", 7, 1963);


	cout << "inside main:  " << p1.getMonthP() << endl;
}
