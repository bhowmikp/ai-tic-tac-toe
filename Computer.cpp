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

/*
* Figures out where the move should be placed
*
* First check if the computer can make a winning move, then check if
* the player can make a winning move in which case block it,
* then try to place a move on the corner, center or side.
*
* @param board: select the board the game is played on
*/
std::pair<int, int> Computer::compute(Board* board) {
  int counter = 0;
  int row = -1, column = -1;
  std::pair<int, int> locationInfo;

  char firstPlayerSymbol = otherPlayerSymbol(board);

  while (counter < 9 && row == -1 && column == -1) {
    if (counter == 0) {
      locationInfo = checkRow(board, GetSymbol());
    } else if (counter == 1) {
      locationInfo = checkColumn(board, GetSymbol());
    } else if (counter == 2) {
      locationInfo = checkDiagonal(board, GetSymbol());
    } else if (counter == 3) {
      locationInfo = checkRow(board, firstPlayerSymbol);
    } else if (counter == 4) {
      locationInfo = checkColumn(board, firstPlayerSymbol);
    } else if (counter == 5) {
      locationInfo = checkDiagonal(board, firstPlayerSymbol);
    } else if (counter == 6) {
      locationInfo = corner(board);
    } else if (counter == 7) {
      locationInfo = center(board);
    } else if (counter == 8) {
      locationInfo = side(board);
    }
    row = locationInfo.first;
    column = locationInfo.second;
    counter++;
  }
  return std::pair<int, int>(row, column);
}

/*
* Gets the symbol of the other player playing
*
* @param board: select the board the game is played on
*
* @return the symbol of the other player. If not found return n
*/
char Computer::otherPlayerSymbol(Board* board) {
  std::string boardString = board->GetBoard();

  for (char &c : boardString) {
    if (c != EMPTY_SYMBOL && c != GetSymbol())
      return c;
  }

  return 'n';
}

/*
* Check rows to see if a move can be made to win the game or stop
* the other player from winning
*
* @param board: select the board the game is played on
* @param playerSymbol: determines whether checking to win or defend.
*                       To check to win send symbol of computer
*                       To check for defend send symbol of other player
*
* @return the (row, column) the move should be placed to win or defend.
*         Sends (-1, -1) if suitable move not found
*/
std::pair<int, int> Computer::checkRow(Board* board, char playerSymbol) {
  (void)board;
  (void)playerSymbol;
  std::pair<int, int> locationInfo;
  return std::pair<int, int>(-1, -1);
}

/*
* Check columns to see if a move can be made to win the game or stop
* the other player from winning
*
* @param board: select the board the game is played on
* @param playerSymbol: determines whether checking to win or defend.
*                       To check to win send symbol of computer
*                       To check for defend send symbol of other player
*
* @return the (row, column) the move should be placed to win or defend.
*         Sends (-1, -1) if suitable move not found
*/
std::pair<int, int> Computer::checkColumn(Board* board, char playerSymbol) {
  (void)board;
  (void)playerSymbol;
  std::pair<int, int> locationInfo;
  return std::pair<int, int>(-1, -1);
}

/*
* Check diagonals to see if a move can be made to win the game or stop
* the other player from winning
*
* @param board: select the board the game is played on
* @param playerSymbol: determines whether checking to win or defend.
*                       To check to win send symbol of computer
*                       To check for defend send symbol of other player
*
* @return the (row, column) the move should be placed to win or defend.
*         Sends (-1, -1) if suitable move not found
*/
std::pair<int, int> Computer::checkDiagonal(Board* board, char playerSymbol) {
  (void)board;
  (void)playerSymbol;
  std::pair<int, int> locationInfo;
  return std::pair<int, int>(-1, -1);
}

/*
* Place move on a corner of the board
*
* @param board: select the board the game is played on
*
* @return a pair containing the (row, column) for the move to be placed
*         if a suitable spot not found returns (-1, -1)
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
*
* @return a pair containing the (row, column) for the move to be placed
*         if a suitable spot not found returns (-1, -1)
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
*
* @return a pair containing the (row, column) for the move to be placed
*         if a suitable spot not found returns (-1, -1)
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
