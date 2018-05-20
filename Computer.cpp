// Computer.h - Create computer player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#include "build/Computer.h"

Computer::~Computer() {}

/**
* Place move on the board
*
* @param row: select the row. Parameter ignored
* @param column: select the column. Paramter ignored
*/
void Computer::PlaceMove(Board* board, int row = 0, int column = 0) {
  if (!board->IsPositionTaken(row, column))
    board->SetSymbol(row, column, Player::symbol);
}
