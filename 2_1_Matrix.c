#include <stdio.h>

int main()
{
    int arr[10][10], i, j,r,c;
    printf("Enter the num of rows");
    scanf("%d",&r);
    printf("Enter the number of column");
    scanf("%d",&c);

    printf("enter the elements in matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("matrix of array is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
    }
          printf("\n");             
        }

    return 0;
}
