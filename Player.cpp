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
void Player::PlaceMove(Board*, int, int) {}

/*
* Set the symbol for the player
*
* @param new_symbol: symbol for the player to be set
*/
void Player::SetSymbol(char new_symbol) {
  this->symbol = new_symbol;
}

char Player::GetSymbol() {
  return this->symbol;
}
