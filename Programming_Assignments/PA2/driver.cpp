/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#include "functions.hpp"


int main(int argc, char* argv[]) {

 fstream input(argv[1], ios::in);
 fstream outGood(argv[2], ios::out);
 fstream outBad(argv[3], ios::out);
 vector<CalendarEvent> goodEvents;
 vector<CalendarEvent> badEvents;

 checkArguments(argc);

 isOpen(input, argv[1]);
 isOpen(outGood, argv[2]);
 isOpen(outBad, argv[3]);


 readData(input, goodEvents, badEvents);

 vectorSort(goodEvents);
 vectorSort(badEvents);



 vector<CalendarEvent>::iterator i;

 for(i = goodEvents.begin(); i < goodEvents.end(); i++) {
   i->printCalendar(outGood);
 }

 for(i = badEvents.begin(); i < badEvents.end(); i++) {
   i->printCalendar(outBad);
 }

 input.close();
 outGood.close();
 outBad.close();
 goodEvents.clear();
 badEvents.clear();

}
