#include <stdio.h>

void main()
{
    int a[50], i, size, data, l, r, mid;

    printf("Enter the size of the array");
    scanf("%d", &size);
    printf("Enter the array element \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements to be searched\n");
    scanf("%d", &data);
        l=0;
        r = size - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data < a[mid])
            r = mid - 1;
        else if (data > a[mid])
            l = mid + 1;
        else if (data == a[mid])
        {   
            printf("%d Element is found at location %d", data, mid+1);
            break;
        }
        if (l > r)
        {
            printf("%d Element not found in the list\n", data);
        }
    }
}