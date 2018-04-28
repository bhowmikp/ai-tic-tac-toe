// Board.cpp - Create tic tac toe board
// Date: April 28, 2018
// Copyright Prantar <Copyright Owner>

#include <string>
#include <iostream>
#include "build/Board.h"

#define ENDL "\n"
#define REP(i, a, b) for (int i = a; i < b; i++)

void Board::ClearBoard() {
  board = "000000000";
}
void Board::PrintBoard() {
  REP(row, 0, 3) {
    REP(column, 0+row, 3+row) {
      std::cout << board[(row*2)+column];
    }
  std::cout << ENDL;
  }
}
std::string Board::GetBoard() {
  return board;
}
void Board::SetSymbol(int row, int column, char symbol) {
  board[((row-1)*3)+(column-1)] = symbol;
}
char Board::GetSymbol(int row, int column) {
  return board[((row-1)*3)+(column-1)];
}
bool Board::IsBoardFull() {
  bool status = false;
  if (board.find("0") == std::string::npos) {
    status = true;
  }
  return status;
}
Board::~Board() {
    instance_flag = false;
}

bool Board::instance_flag = false;
Board* Board::single = NULL;
Board* Board::GetBoardInstance() {
    if (!instance_flag) {
        single = new Board();
        instance_flag = true;
        return single;
    } else {
        return single;
    }
}

int main() {
  Board *sc1, *sc2;
  sc1 = Board::GetBoardInstance();
  sc1->ClearBoard();
  sc2 = Board::GetBoardInstance();
  sc2->SetSymbol(1, 2, 'x');
  sc1->PrintBoard();
  std::cout << sc2->GetBoard() << ENDL;
  std::cout << sc1->GetSymbol(1, 2) << ENDL;
  std::cout << sc1->IsBoardFull() << ENDL;
  return 0;
}
