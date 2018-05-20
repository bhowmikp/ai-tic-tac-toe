// Board.h - Create tic tac toe board
// Date: April 28, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_BOARD_H_
#define BUILD_BOARD_H_

#include <string>

class Board {
 private:
    static bool instance_flag;
    static Board *single;
    std::string board;
    Board();
 public:
    ~Board();
    static Board* GetBoardInstance();
    void CreateBoard();
    void ClearBoard();
    void PrintBoard();
    std::string GetBoard();
    void SetSymbol(int, int, char);
    char GetSymbol(int, int);
    bool IsBoardFull();
    bool IsPositionTaken(int, int);
};

#endif  // BUILD_BOARD_H_
