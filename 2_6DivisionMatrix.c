#include <stdio.h>

void main()
{
    float a1[3][3], a2[3][3],  sum[3][3];
    int i,j;
    printf("enter the elements in matrix 1 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &a1[i][j]);
        }
    }
    printf("enter the elements in matrix 2 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &a2[i][j]);
        }
    }
    printf(" elements in matrix 1 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%f\t", a1[i][j]);
        }
        printf("\n");
    }
    printf(" elements in matrix 2 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%f\t", a2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
          sum[i][j]= a1[i][j]/a2[i][j];
        }
}
    printf("division of a1 and a2 matrix are\n");
         
         for(i=0;i<3;i++){
            for(j=0;j<3;j++){
          printf("%f\t",sum[i][j]);
    }
    printf("\n");
            }         
     }
    
    