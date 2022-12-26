#include <stdio.h>

void main()
{
    int a[20], i, x, n, pos, ch;

    printf("Enter the size of array ");
    scanf("%d", &n);
    printf("Enter the datas");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (1)
    {
        printf("\nEnter your choice\n1. Beginning\n2. Last\n3. At any position\n4. Display\n5. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            x = a[0];
            printf("Deleted data = %d ", x);
            for (i = 1; i < n; i++)
            {
                a[i - 1] = a[i];
            }
            n--;
            break;
        case 2:
            x = a[n - 1];
            n = n - 1;
            printf("Deleted data = %d ", x);
            break;
        case 3:
            printf("Enter the position ");
            scanf("%d", &pos);
            x = a[pos - 1];
            printf("Deleted data =%d ", x);
            for (i = pos; i < n; i++)
            {
                a[i - 1] = a[i];
            }
            n--;
            break;
        case 4:
            for (i = 0; i < n; i++)
            {
                printf("%d\t", a[i]);
            }
            break;
        case 5:
            exit(1);
        default:
            printf("Enter Valid option ");
        }
    }
}