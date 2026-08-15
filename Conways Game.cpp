#include <iostream>
using namespace std;

int main()
{
    int grid[5][5];
    int newGrid[5][5];
    int generations;

    cout << "CONWAY'S GAME OF LIFE\n\n";

    cout << "Enter 0 for Dead and 1 for Alive\n";

    // Taking initial state
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << "Enter cell [" << i << "][" << j << "]: ";
            cin >> grid[i][j];
        }
    }

    cout << "Enter number of generations:\n ";
    cin >> generations;

    for(int g = 0; g < generations; g++)
    {
        cout << "\nGeneration " << g + 1 << ":\n";
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(grid[i][j] == 1)
                    cout << "* ";
                else
                    cout << ". ";
            }
            cout << endl;
        }


        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                int count = 0;
                for(int x = i - 1; x <= i + 1; x++)
                {
                    for(int y = j - 1; y <= j + 1; y++)
                    {
                        if(x >= 0 && x < 5 && y >= 0 && y < 5)
                        {
                            if(!(x == i && y == j))
                            {
                                count = count + grid[x][y];
                            }
                        }
                    }
                }

                if(grid[i][j] == 1)
                {
                    if(count == 2 || count == 3)
                        newGrid[i][j] = 1;
                    else
                        newGrid[i][j] = 0;
                }
                else
                {
                    if(count == 3)
                        newGrid[i][j] = 1;
                    else
                        newGrid[i][j] = 0;
                }
            }
        }

        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                grid[i][j] = newGrid[i][j];
            }
        }
    }

    return 0;
}
