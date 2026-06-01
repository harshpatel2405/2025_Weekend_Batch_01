/*
 *  1. Saddle Point in 2D Array
 *  Logic
 *
 *  A saddle point is:
 *
 *  Smallest in its row
 *  Largest in its column
 *  Steps
 *  Take one row.
 *  Find the smallest element in that row.
 *  Check its column.
 *  If it is largest in that column → Saddle Point found
 *
 *  1 2 3
 *  4 5 6
 *  7 8 9
 */

#include <iostream>
using namespace std;

int main()
{
    int row = 3, column = 3;
    int arr[row][column] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int n = arr[i][j];
            int rs = 0;
            // cout << "\n" << n << endl;
            for (int k = 0; k < row; k++)
            {
                if (k == j)
                    continue;

                // cout << n << " < " << arr[i][k] << " = " << (n < arr[i][k]) << "\n";
                if (n < arr[i][k])
                {
                    rs++;
                }
            }

            // cout << "RS -> " << rs << endl;

            if (rs == column - 1)
            {
                int cs = 0;
                for (int m = 0; m < column; m++)
                {
                    if (m == i)
                        continue;

                    // cout << n << " > " << arr[m][i] << " = " << (n > arr[m][i]) << "\n";
                    if (n > arr[m][i])
                    {
                        cs++;
                    }
                }

                // cout << "CS -> " << cs << endl;
                if (cs == row - 1)
                {
                    cout << n << " -> is saddle point " << endl;
                }
            }
        }
    }

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 9, 6},
        {7, 8, 5}
    };

    int i, j, k;
    int min, col, saddle = 0;

    for(i = 0; i < 3; i++)
    {
        min = arr[i][0];
        col = 0;

        // Find smallest in row
        for(j = 1; j < 3; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
                col = j;
            }
        }

        // Check largest in column
        for(k = 0; k < 3; k++)
        {
            if(arr[k][col] > min)
                break;
        }

        if(k == 3)
        {
            printf("Saddle Point = %d", min);
            saddle = 1;
        }
    }

    if(saddle == 0)
        printf("No Saddle Point");

    return 0;
}
*/