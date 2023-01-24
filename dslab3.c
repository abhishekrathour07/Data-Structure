#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, count, n, a[20];
    int choice, temp, position;
    printf("Enter the size");
    scanf("%d", &n);
    printf("Enter the element in the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (1)
    {
        printf("\nEnter Your choice \n 1.insertion Sort \n 2.SElection Sort \n 3.display\n 4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                temp = a[i];
                j = i - 1;
                while (j >= 0 && a[j] < temp)
                {
                    a[j + 1] = a[j];
                    j--;
                }
                a[j + 1] = temp;
            }
            break;
        case 2:
            for (i = 0; i < (n - 1); i++)
            {
                position = i;
                for (j = i + 1; j < n; j++)
                {
                    if (a[position] < a[j])
                        position = j;
                }
                if (position != i)
                {
                    temp = a[i];
                    a[i] = a[position];
                    a[position] = temp;
                }
            }
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                printf("%d\t", a[i]);
            }
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("ENter the correct choice");
            break;
        }
    }
}