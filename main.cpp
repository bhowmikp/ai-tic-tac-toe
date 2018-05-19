// main.cpp - Executes the game
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#include <iostream>
#include <string>
#include "build/Board.h"
#include "build/Human.h"
#include "build/Player.h"
#include "build/PlayerCreation.h"

#define ENDL "\n"

int main() {
  Board *sc1, *sc2;
  sc1 = Board::GetBoardInstance();
  sc1->ClearBoard();
  sc2 = Board::GetBoardInstance();
  sc2->SetSymbol(1, 2, 'x');
  sc1->PrintBoard();
  std::cout << ENDL;
  std::cout << sc2->GetBoard() << ENDL;
  std::cout << sc1->GetSymbol(1, 2) << ENDL;
  std::cout << sc1->IsBoardFull() << ENDL;

  PlayerCreation *player = new PlayerCreation();
  Player *first = player->GetPlayer("ComPuter");
  first->PlaceMove(1, 2);

  return 0;
}
