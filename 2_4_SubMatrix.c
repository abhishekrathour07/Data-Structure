#include <stdio.h>

void main()
{
    int matrix1[3][2], matrix2[3][2], sum[3][2];
    int i, j;
    printf("Enter element in matrix1 are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter element in matrix2 are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("the element in matrix1 are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("the element in matrix2 are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("subtraction of a1 and a2 matrix are\n");
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}