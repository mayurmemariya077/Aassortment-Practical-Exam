
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

    for(int i = 0; i < row; i++)
    {
        int sum = 0;

        for(int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    for(int j = 0; j < col; j++)
    {
        int sum = 0;

        for(int i = 0; i < row; i++)
        {

            sum = sum + a[i][j];
            
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }







    
    return 0;
}
