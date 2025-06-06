#include <stdio.h>

int main()
{
    // Write Your Code Here
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row && flag; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                if (a[i][j] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            else if (a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Secondary Diagonal");
    }
    else
    {
        printf("Not Diagonal");
    }
    return 0;
}