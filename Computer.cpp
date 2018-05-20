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
void Computer::PlaceMove(Board* board, int row, int column) {
  if (!board->IsPositionTaken(row, column))
    board->SetSymbol(row, column, Player::GetSymbol());
}
