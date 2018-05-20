// Human.h - Create human player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#include "build/Human.h"

Human::~Human() {}

/**
* Place move on the board
*
* @param row: select the row
* @param column: select the column
*/
void Human::PlaceMove(Board* board, int row, int column) {
  if (!board->IsPositionTaken(row, column))
    board->SetSymbol(row, column, Player::symbol);
}
