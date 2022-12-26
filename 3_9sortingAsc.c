#include <stdio.h>

 void main()
{
    int arr[20]; 
    int i, j, temp, size;
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    printf("Enter the elements in the array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The numbers in ascending order is:");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}