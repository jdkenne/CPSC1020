/********************\
Joshua Kennerly
jdkenne
Lab 8
Lab Section 003
Alex and Nushrat
\*********************/

#include "board.hpp"

//Initializes players and the values in the board
Board::Board(){
    gameboard[0][0] = "1";
    gameboard[0][1] = "2";
    gameboard[0][2] = "3";
    gameboard[1][0] = "4";
    gameboard[1][1] = "5";
    gameboard[1][2] = "6";
    gameboard[2][0] = "7";
    gameboard[2][1] = "8";
    gameboard[2][2] = "9";
    pieces.push_back("x");
    pieces.push_back("o");
    numTurns = 0;
 }

//Prints out the gameboard
 string Board::print(){
   stringstream ss;
   for(int i = 0; i < 3; i++) {
     ss << endl << "\t\t\t\t\t";
     for(int j = 0; j < 3; j++) {
       ss  << "| "<< gameboard[i][j] << " ";
       }
       ss << "|";
   }
   ss << endl << endl;
   return ss.str();
 }

//Clears the pieces vector && is a destructor
 Board::~Board(){
   pieces.clear();
 }

//Parses through the board to input the player name into the board
//at that value
 void Board::insert_piece(int pos, string p){
   int count = 1;
   for(int i = 0; i < 3; i++) {
     for(int j = 0; j < 3; j++) {
       if(count == pos) {
         gameboard[i][j] = p;
       }
       count++;
     }
   }
   numTurns++;
 }

//Switches between player x and player o
 string Board::get_piece(int pos){
   pos = pos % 2;
   if(pos == 0) {
     return "x";
   }
   else {
     return "o";
   }

 }

//Uses a series of bools to check if the game has been won
 bool Board::won(string p){
   bool down1 = (gameboard[0][0]==p)&&(gameboard[0][1]==p)&&(gameboard[0][2]==p);
   bool down2 = (gameboard[1][0]==p)&&(gameboard[1][1]==p)&&(gameboard[1][2]==p);
   bool down3 = (gameboard[2][0]==p)&&(gameboard[2][1]==p)&&(gameboard[2][2]==p);
   bool row1 = (gameboard[0][0]==p)&&(gameboard[1][0]==p)&&(gameboard[2][0]==p);
   bool row2 = (gameboard[0][1]==p)&&(gameboard[1][1]==p)&&(gameboard[2][1]==p);
   bool row3 = (gameboard[0][2]==p)&&(gameboard[1][2]==p)&&(gameboard[2][2]==p);
   bool dia1 = (gameboard[0][0]==p)&&(gameboard[1][1]==p)&&(gameboard[2][2]==p);
   bool dia2 = (gameboard[0][2]==p)&&(gameboard[1][1]==p)&&(gameboard[2][0]==p);

   if(down1 || down2 || down3 || row1 || row2 || row3 || dia1 || dia2) {
     cout << this->print();
     cout << "Congrats player: " << p << ", you won!" << endl;
     return 1;
   }

   return 0;
 }

//After 9 moves have been made without a winner, it tells you that you tied
 bool Board::is_a_tie(){
   if(numTurns == 9) {
     cout << "Sorry, both players tied!" << endl;
   return true;
   }
   else {
     return false;
   }
 }
