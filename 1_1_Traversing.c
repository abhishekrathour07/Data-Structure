// Transversing Program.

#include <stdio.h>

void main()
{
    int a[20], i, size;
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("value of element  %d in array is", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}