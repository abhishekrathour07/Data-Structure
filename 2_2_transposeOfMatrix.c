 #include <stdio.h>
#include<stdlib.h>
void main()
{
    int arr[3][4], i, j;
    printf("enter the no. in Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the Matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix is\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}