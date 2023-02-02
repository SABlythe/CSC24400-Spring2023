#ifndef _SOLVER_HPP_
#define _SOLVER_HPP_

class Solver
{
private:
    int _actualSize;         // how big board we are solving is
public:
    Solver();
    Solver(int bSize);

    bool solveBoard(int startCol);

    void printBoard();
private:
    void printRow(int thisRow);
    void printBorder();
    bool canPlace(int intoRow, int intoCol);
};

#endif
