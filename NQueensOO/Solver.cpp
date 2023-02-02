#include <iostream>

#include "Solver.hpp"

using namespace std;

#define MAX_SIZE 100
char board[MAX_SIZE][MAX_SIZE];

Solver::Solver()
{
    _actualSize =8;


    for (int row=0; row<_actualSize; row++)
        for (int col=0; col<_actualSize; col++)
            board[row][col] = ' ';
}

Solver::Solver(int boardDim)
{
    _actualSize =boardDim;


    for (int row=0; row<_actualSize; row++)
        for (int col=0; col<_actualSize; col++)
            board[row][col] = ' ';
}


void
Solver::printRow(int thisRow)
{
    // go through each column in the row
    for (int colNumber=0; colNumber<_actualSize; colNumber++)
    {
        //   ... and print out the value found in that column
        cout << '|' << board[thisRow][colNumber];
    }
    // finish the row by dropping down a line
    cout << '|' << endl;
}

void
Solver::printBorder()
{
    //print out SIZE  "+- sequences"
    for (int count=0; count<_actualSize; count++)
        cout << "+-";
    // finish the border row by dropping down a line
    cout << '+' << endl;
}

void
Solver::printBoard()
{
    // go through each row
    for (int rowNumber = 0; rowNumber<_actualSize; rowNumber++)
    {
        // before printing the row's values, print a '+-+-...' border
        printBorder();
        //   print out the row
        printRow(rowNumber);
    }
    printBorder();


}

bool
Solver::canPlace(int inRow, int inCol)
{
    // check my row
    //   ... only need to check colums to my left (lower index than me)
    for (int checkCol =0; checkCol < inCol; checkCol++)
    {
        // is there a queen in the position we are checking?
        if (board[inRow][checkCol] == 'Q')
            return false;
    }
    // check my upper left diagonal
    int checkCol=inCol -1 ;
    int checkRow=inRow -1 ;
    while( checkCol >=0  &&   checkRow>=0 )
    {
        if (board[checkRow][checkCol] == 'Q')
            return false;

        checkRow--;
        checkCol--;
    }
    // check my lower left diagonal
    checkCol=inCol -1 ;
    checkRow=inRow +1 ;
    while( checkCol >=0  &&   checkRow < _actualSize )
    {
        if (board[checkRow][checkCol] == 'Q')
            return false;

        checkRow++;
        checkCol--;
    }
    return true;
}
bool
Solver::solveBoard(int colForNextQueen)
{
    // if you've gotten beyond right edge of board, you've
    //  placed a queen in every other column, so you have solved
    //  the problem.
    if (colForNextQueen >= _actualSize)
        return true;

    // try every row in this column
    for (int rowNumber=0; rowNumber < _actualSize; rowNumber++)
    {
        //    can i put a queen here?
        if (canPlace(rowNumber, colForNextQueen))
        {
            // put a queen here!
            board[rowNumber][colForNextQueen] = 'Q';

            //    if so, try next column ...
            if (solveBoard(colForNextQueen+1) )
                return true;

            // if we get here, the placed queen didn't work ...
            //   .. so we should "remove" it
            board[rowNumber][colForNextQueen] =  ' '; // or '.' to mark bad steps
        }
    }
    // tried every possible row, but none worked if we get here
    //   (i.e. completed for loop)
    return false;
}

