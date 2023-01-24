#include <iostream>

using namespace std;

#define SIZE 8
char board[SIZE][SIZE];

void initBoard()
{
    for (int row=0; row<SIZE; row++)
        for (int col=0; col<SIZE; col++)
            board[row][col] = '.';
}

void printBoard()
{
    for (int row=0; row<SIZE; row++)
    {
        for (int col=0; col<SIZE; col++)
            cout << board[row][col];
        cout << endl;
    }
}

void solveBoard()
{

}
int main(int argc, char *argv[])
{
    initBoard();
    cout << "The UNsolved board is :" << endl;
    printBoard();
    solveBoard();
    cout << "The solved board is :" << endl;
    printBoard();

    return 0;
}
