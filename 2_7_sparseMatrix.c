#include <stdio.h>

void main()
{
    int a[25][25], r, c, i, j;
    int s[25][3], p = 1;
    printf("Enter the row and col of the matrix");
    scanf("%d %d", &r, &c);
    printf("Enter the value in matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    s[0][0] = r;
    s[0][1] = c;
    s[0][2] = p - 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                s[p][0] = i;
                s[p][1] = j;
                s[p][2] = a[i][j];
                p++;
            }
        }
    }
    printf("Sparse Matrix are\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
}