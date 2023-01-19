#include <iostream>
using namespace std;

#define EMPTY '.'
#define MAXSIZE 100
#define NUM_FIREWORKS 80
char grid[MAXSIZE][MAXSIZE];

void initGrid()
{
    for (int row = 0; row < MAXSIZE; row++)
    {
        for (int col = 0; col < MAXSIZE; col++)
        {
            grid[row][col] = EMPTY;
        }
    }
}

void printGrid( int rowCount, int colCount )
{
    cout << "Here begineth the display:" << endl;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < colCount; col++)
        {
            cout << grid[row][col];
        }
        cout << endl;
    }
    cout << "Here endeth the display" << endl << endl;
}

void addFireworks(int rowCount, int colCount)
{
    for (int fnum=0; fnum < NUM_FIREWORKS; fnum++)
    {
        int col = rand() % colCount;
        int row = rand() % rowCount;

        grid[row][col] = '*';
    }
}

int main(int argc, char *argv[])
{
    cout << "How many rows and colums should there be?";
    int nRows, nCols;
    cin >> nRows >> nCols;



    initGrid();
    printGrid(nRows, nCols);
    addFireworks(nRows, nCols);
    printGrid(nRows, nCols);

    return 0;
}
