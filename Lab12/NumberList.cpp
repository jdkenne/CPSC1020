#include "NumberList.h"
using namespace std;

//*****************************************************
// add adds a new element to the end of the list.     *
//*****************************************************
void NumberList::add(int number)
{
    /*if the list empty */
   if (head == NULL)
      /*Returns a pointer to the new listNode to head*/
      head = new ListNode(number);
   else
     {
       // The list is not empty
       // Use nodePtr to traverse the list
       /*nodePtr is set to the beginning of the list because this is where
        *head is pointing*/
       ListNode *nodePtr = head;
       while (nodePtr->next != NULL)
          nodePtr = nodePtr->next;

       // nodePtr->next is NULL so nodePtr points to the last node
       // Create a new node and put it after the last node
       nodePtr->next = new ListNode(number);
     }
}

//***************************************************
//Removes a number from a list.  The function does
//not assume that the list is sorted
//***************************************************

void NumberList::remove(int number)
{
  ListNode *nodePtr, *previousNodePtr;

    //If the list is empty, do nothing
    //if head == null then the list is empty
    if(!head) return;

    //Determine if the first node is the one to delete
    if(head->value == number)
    {
      nodePtr = head;
      head = head->next;
      delete nodePtr;
    }
    else
    {
      //Initialize nodePtr to the head of the list
      nodePtr = head;

      //skip nodes whose value member is not the number you are looking for
      while(nodePtr != NULL && nodePtr->value != number)
      {
        previousNodePtr = nodePtr;
        nodePtr = nodePtr->next;
      }

      //link the previous node to the node after
      //nodePtr, then delete nodePtr
      if(nodePtr)
      {
        previousNodePtr->next = nodePtr->next;
        delete nodePtr;
      }
    }
}


//***************************************************
// displayList outputs a sequence of all values     *
// currently stored in the list.                    *
//***************************************************
void NumberList::displayList() const
{
   ListNode *nodePtr = head;   // Start at head of list
   while (nodePtr) //this means while nodePtr is not == null
   {
      // Print the value in the current node
      cout << nodePtr->value << "    ";
      // Move on to the next node
      nodePtr = nodePtr->next;
   }
}

//******************************************************
// Destructor deallocates the memory used by the list. *
//******************************************************
NumberList::~NumberList()
{
  ListNode *nodePtr = head;  // Start at head of list
  while (nodePtr != NULL)
  {
      // garbage keeps track of node to be deleted
      ListNode *garbage = nodePtr;
      // Move on to the next node, if any
      nodePtr = nodePtr->next;
      // Delete the "garbage" node
      delete garbage;
  }
}
