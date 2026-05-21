

#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter rows: ");

    scanf("%d", &row);

    printf("Enter columns: ");
    
    scanf("%d", &col);

    int a[row][col];

    printf("Enter array elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {

            scanf("%d", &a[i][j]);

        }
    }

    int max = a[0][0];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if( a[i][j] > max)
            {

                max = a[i][j];
                
            }
        }
    }

    printf("Largest element is: %d", max);

    return 0;
}