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

   printf("Transpose matrix is:\n");


    for(int i = 0; i < col; i++)
    {
       for(int j = 0; j < row; j++)
        {

            printf("%d ", a[j] [i]);

        }

        printf("\n");
    }

    return 0;
}