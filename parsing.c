#include "sudoku.h"

void parsing(char **argv, char **grid)
{
    int x;
    int y;

    x = -1;
    while (++x < 9)
    {
        y = -1;
        while (++y < 9)
        {
            if (argv[x][y] == '.')
                grid[x][y] = '0';
            else
                grid[x][y] = argv[x][y];
        }
    }
}