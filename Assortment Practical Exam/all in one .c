


// Question 1 



#include <stdio.h>

int main()
{
    int n;

    printf("Enter array size: ");
    
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
        
    }

    printf(" Negative elements are: ");

    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {

            printf("%d ", a[i]);

        }
    }

    return 0;
}






// Question  2      








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




// question 3 




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



// question 4    







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
