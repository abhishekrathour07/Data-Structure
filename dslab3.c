// QUES NUMBER 3
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, count, n;
    int choice, temp;
   int a[] ={75,8,1,16,48,3,7,0};
    while (1)
    {
        printf("\nEnter Your choice \n 1.insertion Sort \n 2.SElection Sort \n 3.display\n 4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (i = 1; i < 8; i++)
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
           for (i = 0; i < 8-1; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
            break;
        case 3:
            for (i = 0; i < 8; i++)
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