#include <unistd.h>
#include <fstream>
#include <string.h>
#include <iostream>


using namespace std;

int main (int argc, char* argv[]) {

    string question;
    string temp;
    string fileQuestions;

    ifstream input;
    input.open(argv[2]);

    string question1;
    string question2;
    string question3;
    string lastQuestion;

    cout << "Please enter your first name:" << endl;
    string name;
    cin >> name;

    cout << "Hello " << name << ", I am Multivac, a supercomputer that can answer a series of questions." << endl;
    cout << "I will now parse through the .txt file you gave me to answer some questions." << endl;

    //Grabs the first line from the .txt file
    getline(input, question1);

    if (question1 == "Who won the 2019 National Championship Game") {
        
        //Puts the program to sleep for 15 seconds
        sleep(15);

        cout << "The #2 Clemson Tigers beat the #1 Alabama Crimson Tide 44-16 to win the National Championship." << endl;
    
    } else {

        //The next line puts the program to sleep for 15 seconds
        sleep(15);

         cout << "I cannot answer that question." << endl;
         exit(0);
    }

    //Grabs the second line from the .txt file
    getline(input, question2);

    if(question2 == "Who and when was the first black student admitted to Clemson University") {

        //Puts the program to sleep for 20 seconds
        sleep(20);

        cout << "Harvey Gantt was the first black student to be admitted to Clemson...being admitted in January of 1963." << endl;
       
    } else {

            //The next line puts the program to sleep for 20 seconds
            sleep(20);

            cout << "I cannot answer that question."  << endl;
            exit(1);
    }

   
    //Grabs the third line from the .txt file
    getline(input, question3);

    if(question3 == "What section of English 2150 do I teach") {

        //Puts the program to sleep for 30 seconds
        sleep(30);

        cout << name << ", you teach Section 016 of English 2150 at Clemson University." << endl;

    } else {

            //Puts the program to sleep for 30 seconds
            sleep(30);

            cout << "I cannot answer that question." << endl;
            exit(2);
    }

    //Grabs the final line from the .txt file
    getline(input, lastQuestion);

    if(lastQuestion == "How can the net amount of entropy of the universe be massively decreased") {

        //Puts the program to sleep for 1 minute
        sleep(60);

        cout << "INSUFFICIENT DATA FOR MEANINGFUL ANSWER." << endl;

    } else {
                    
            //Puts the program to sleep for 1 minute
            sleep(60);

            cout << "I cannot answer that question." << endl;
            exit(3);
    }

    
    return 0;
}
