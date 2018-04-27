#ifndef Board_H
#define Board_H

#include <string>

class Board{
private:
    static bool instance_flag;
    static Board *single;
    std::string board;
    Board() {}
  public:
    static Board* GetBoardInstance();
    void ClearBoard();
    void PrintBoard();
    std::string GetBoard();
    void SetSymbol(int, int, char);
    char GetSymbol(int, int);
    bool IsBoardFull();
    ~Board();
};

#endif
