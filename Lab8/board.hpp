/********************\
Joshua Kennerly
jdkenne
Lab 8
Lab Section 003
Alex and Nushrat
\*********************/

#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;


class Board
{
    private:
        std::vector<std::string> pieces;

        std::string gameboard[3][3];

        int numTurns;
    public:

        Board();

        ~Board();

        std::string print();
        
        void insert_piece(int pos, std::string p);

        std::string get_piece(int pos);

        bool won(std::string p);

        bool is_a_tie();
};
