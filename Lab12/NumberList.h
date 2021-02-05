#include <iostream>
using namespace std;

/*The class NumberList has ListNode does not need to be accessed
 *by any code outside the NumberList, so it is included in the 
 *NumberList class.  The struct is declared protected so other
 *classes that are derived from NumberList may have access. */
class NumberList
{
protected:
    // Declare a class for the list node
    struct ListNode
    {
       int value;
       ListNode *next;
       ListNode(int value1, ListNode *next1 = NULL)
       {
          value = value1;
          next = next1;
       }      
    };
    ListNode *head;                   // List head pointer
public:
    /*since head is null the list starts out empty*/
    NumberList() { head = NULL;  }    // Constructor
    ~NumberList(); //Destructor
    /*Adds a new element to the end of the list*/                  
    void add(int number);
    void remove(int number);
    void displayList() const;
};

