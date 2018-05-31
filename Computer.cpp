// Computer.h - Create computer player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#include "build/Computer.h"

Computer::~Computer() {}

/**
* Place move on the board
*
* @param board: select the board the game is played on
* @param row: select the row. Parameter ignored
* @param column: select the column. Paramter ignored
*/
void Computer::PlaceMove(Board* board, int row, int column) {
  (void)row;
  (void)column;

  std::pair<int, int> locationInfo;
  locationInfo = compute(board);

  board->SetSymbol(locationInfo.first, locationInfo.second, GetSymbol());
}

std::pair<int, int> Computer::compute(Board* board) {
  int counter = 0;
  int row = -1, column = -1;
  std::pair<int, int> locationInfo;

  while (counter < 3 && row == -1 && column == -1) {
    if (counter == 0) {
      locationInfo = corner(board);
      row = locationInfo.first;
      column = locationInfo.second;
    } else if (counter == 1) {
      locationInfo = center(board);
      row = locationInfo.first;
      column = locationInfo.second;
    } else if (counter == 2) {
      locationInfo = side(board);
      row = locationInfo.first;
      column = locationInfo.second;
    }
    counter++;
  }
  return std::pair<int, int>(row, column);
}

/*
* Place move on a corner of the board
*
* @param board: select the board the game is played on
*/
std::pair<int, int> Computer::corner(Board* board) {
  int row = -1, column = -1;

  if (board->GetSymbol(1, 1) == EMPTY_SYMBOL) {
    row = 1;
    column = 1;
  } else if (board->GetSymbol(1, 3) == EMPTY_SYMBOL) {
    row = 1;
    column = 3;
  } else if (board->GetSymbol(3, 1) == EMPTY_SYMBOL) {
    row = 3;
    column = 1;
  } else if (board->GetSymbol(3, 3) == EMPTY_SYMBOL) {
    row = 3;
    column = 3;
  }

  return std::pair<int, int>(row, column);
}

/*
* Place move on a center of the board
*
* @param board: select the board the game is played on
*/
std::pair<int, int> Computer::center(Board* board) {
  int row = -1, column = -1;

  if (board->GetSymbol(2, 2) == EMPTY_SYMBOL) {
    row = 2;
    column = 2;
  }

  return std::pair<int, int>(row, column);
}

/*
* Place move on a side of the board
*
* @param board: select the board the game is played on
*/
std::pair<int, int> Computer::side(Board* board) {
  int row = -1, column = -1;

  if (board->GetSymbol(1, 2) == EMPTY_SYMBOL) {
    row = 1;
    column = 2;
  } else if (board->GetSymbol(2, 1) == EMPTY_SYMBOL) {
    row = 2;
    column = 1;
  } else if (board->GetSymbol(2, 3) == EMPTY_SYMBOL) {
    row = 2;
    column = 3;
  } else if (board->GetSymbol(3, 2) == EMPTY_SYMBOL) {
    row = 3;
    column = 2;
  }

  return std::pair<int, int>(row, column);
}
