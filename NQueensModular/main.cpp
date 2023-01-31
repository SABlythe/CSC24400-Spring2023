#include <iostream>

#include "Solver.hpp"


int main(int argc, char *argv[])
{
    cout << "How big is the board dim? ";
    cin >> actualSize;

    initBoard();

    /* uncomment this iif you want to see the empty board first
    cout << "The UNsolved board is :" << endl;
    printBoard();
    */

    if (solveBoard(0) )
    {
        cout << "The solved board is :" << endl;
        printBoard();
    }
    else
    {
        cout << "No solution!!!" << endl;
    }
    return 0;
}
