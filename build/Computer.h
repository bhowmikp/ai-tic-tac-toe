// Computer.h - Create computer player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_COMPUTER_H_
#define BUILD_COMPUTER_H_

#include "Board.h"
#include "Player.h"
#include <iostream>
#include <utility>

#define REP(i, a, b) for (int i = a; i < b; i++)

class Computer : public Player {
 private:
    std::pair<int, int> checkRow(Board*, char);
    std::pair<int, int> checkColumn(Board*, char);
    std::pair<int, int> checkDiagonal(Board*, char);
    std::pair<int, int> corner(Board*);
    std::pair<int, int> center(Board*);
    std::pair<int, int> side(Board*);
    std::pair<int, int> compute(Board*);
 public:
    ~Computer();
    void PlaceMove(Board*, int = 0, int = 0);
};

#endif  // BUILD_COMPUTER_H_
