
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