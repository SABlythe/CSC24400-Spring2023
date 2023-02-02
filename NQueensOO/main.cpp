#include <iostream>

#include "Solver.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    int actualSize;

    cout << "How big is the board dimension? ";
    cin >> actualSize;

    //initBoard();
    Solver qsolver(actualSize);


    /* uncomment this iif you want to see the empty board first
    cout << "The UNsolved board is :" << endl;
    printBoard();
    */

    Solver eighter;
    eighter.solveBoard(0);

    if (qsolver.solveBoard(0) )
    {
        cout << "The solved board is :" << endl;
        qsolver.printBoard();
    }
    else
    {
        cout << "No solution!!!" << endl;
    }

    eighter.printBoard();
    return 0;
}
