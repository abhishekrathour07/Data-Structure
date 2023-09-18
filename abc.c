#include <stdio.h>

void main()
{
    int a[10], i, size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Before reverse\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("After reverse:\n");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}