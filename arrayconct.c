#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], b[10], size, m, i, c[20], k;
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    printf("enter the element in array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k=i;
    printf("enter size of array 2\n");
    scanf("%d", &m);
    printf("enter the element in array");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }
    printf("Array concatination are \n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", c[i]);
    }
}