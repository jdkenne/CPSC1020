/********************\
Joshua Kennerly
jdkenne
Lab 8
Lab Section 003
Alex and Nushrat
\*********************/

#include "board.hpp"

int main(int argc, char* argv[]){
  Board theGame;
  int moves = 0;
  string board = theGame.print();
  string currentPlayer = theGame.get_piece(moves);
  bool statusWin = theGame.won(currentPlayer);
  bool statusTie = theGame.is_a_tie();
  int input;

  while(!statusWin && !statusTie){
    currentPlayer = theGame.get_piece(moves);
    board = theGame.print();
    cout << board;
    cout << "Player " << currentPlayer << ": which position would you like to play?" << endl;
    cin >> input;
    theGame.insert_piece(input, currentPlayer);
    currentPlayer = theGame.get_piece(moves);
    moves++;
    statusWin = theGame.won(currentPlayer);
    statusTie = theGame.is_a_tie();
  }

  return 0;
}
