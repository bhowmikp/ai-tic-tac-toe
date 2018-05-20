// Player.cpp - Abstract class for Player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#include "build/Player.h"

Player::~Player() {}

/**
* Place move on the board
*
* @param row: select the row
* @param column: select the column
*/
void Player::PlaceMove(Board* board, int row, int column) {}

/*
* Set the symbol for the player
*
* @param symbol: symbol for the player to be set
*/
void Player::SetSymbol(char symbol) {
  this->symbol = symbol;
}
