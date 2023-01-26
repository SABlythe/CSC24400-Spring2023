#include <iostream>

using namespace std;

#define SIZE 8
char board[SIZE][SIZE];

void initBoard()
{
    for (int row=0; row<SIZE; row++)
        for (int col=0; col<SIZE; col++)
            board[row][col] = ' ';
}
void printRow(int thisRow)
{
    // go through each column in the row
    for (int colNumber=0; colNumber<SIZE; colNumber++)
    {
        //   ... and print out the value found in that column
        cout << '|' << board[thisRow][colNumber];
    }
    // finish the row by dropping down a line
    cout << '|' << endl;
}

void printBorder()
{
    //print out SIZE  "+- sequences"
    for (int count=0; count<SIZE; count++)
        cout << "+-";
    // finish the border row by dropping down a line
    cout << '+' << endl;
}
void printBoard()
{
    // go through each row
    for (int rowNumber = 0; rowNumber<SIZE; rowNumber++)
    {
        // before printing the row's values, print a '+-+-...' border
        printBorder();
        //   print out the row
        printRow(rowNumber);
    }
    printBorder();

    /*
    for (int row=0; row<SIZE; row++)
    {
        for (int col=0; col<SIZE; col++)
            cout << board[row][col];
        cout << endl;
    }
    */
}

bool canPlace(int inRow, int inCol)
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

    // check my lower left diagonal

    return true;
}
void solveBoard(int colForNextQueen)
{
    // if you've gotten beyond right edge of board, you've
    //  placed a queen in every other column, so you have solved
    //  the problem.
    if (colForNextQueen >= SIZE)
        return;

    // try every row in this column
    for (int rowNumber=0; rowNumber < SIZE; rowNumber++)
    {
        //    can i put a queen here?
        if (canPlace(rowNumber, colForNextQueen))
        {
            // put a queen here!
            board[rowNumber][colForNextQueen] = 'Q';

            //    if so, try next column ...
            solveBoard(colForNextQueen+1);
        }
    }
}
int main(int argc, char *argv[])
{
    initBoard();
    cout << "The UNsolved board is :" << endl;
    printBoard();
    solveBoard(0);
    cout << "The solved board is :" << endl;
    printBoard();

    return 0;
}
