#include <stdio.h>

void main()
{
    int a[10], i, size, x;
    printf("Enter size of array:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter %d elements:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter value of x:");
    scanf("%d", &x);
    size++;
    for (i = size - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = x;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}
