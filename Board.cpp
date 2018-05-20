// Board.cpp - Create tic tac toe board
// Date: April 28, 2018
// Copyright Prantar <Copyright Owner>

#include <string>
#include <iostream>
#include "build/Board.h"

#define ENDL '\n'
#define REP(i, a, b) for (int i = a; i < b; i++)

bool Board::instance_flag = false;
Board* Board::single = NULL;

char const EMPTY_SYMBOL = '-';

Board::Board() {
  instance_flag = true;
}

/**
* Board object deconstructor
*/
Board::~Board() {
  instance_flag = false;
}

/**
* @return board object
*/
Board* Board::GetBoardInstance() {
  if (!instance_flag) {
    single = new Board();
  }
  return single;
}

/**
* Creates an empty board
*/
void Board::CreateBoard() {
  board = std::string(9, EMPTY_SYMBOL);
}

/**
* Removes all selection on the board
*/
void Board::ClearBoard() {
  board = std::string(9, EMPTY_SYMBOL);
}

/**
* Prints the contents of the board
*/
void Board::PrintBoard() {
  REP(row, 0, 3) {
    REP(column, 0+row, 3+row) {
      std::cout << board[(row*2)+column];
    }
  std::cout << ENDL;
  }
}

/**
* @return get string representation of board
*/
std::string Board::GetBoard() {
  return board;
}

/**
* Mark the location on the board with the specified symbol
*
* @param row: select the row
* @param column: select the column
* @param symbol: symbol to set at the specified row and column
*/
void Board::SetSymbol(int row, int column, char symbol) {
  board[((row-1)*3)+(column-1)] = symbol;
}

/**
* Get the symbol at the specified locaion
*
* @param row: select the row
* @param column: select the column
*
* @return the symbol at the specified location
*/
char Board::GetSymbol(int row, int column) {
  return board[((row-1)*3)+(column-1)];
}

/**
* Returns if all the position in the board is taken
*
* @return whether there is an available spot in the board or not
*/
bool Board::IsBoardFull() {
  bool status = false;
  if (board.find(EMPTY_SYMBOL) == std::string::npos) {
    status = true;
  }
  return status;
}

/**
* Given the position determines if a symbol has been placed there already
*
* @param row: select the row
* @param column: select the column
*
* @return boolean telling if the position has been taken
*/
bool Board::IsPositionTaken(int row, int column) {
  return GetSymbol(row, column) != EMPTY_SYMBOL;
}
