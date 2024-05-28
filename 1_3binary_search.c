#include <stdio.h>
#include<time.h>
#include<unistd.h>

int main()
{
    int c, first, last, middle, n, search, array[100];
    clock_t begin, end;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter value to find\n");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
   begin = clock();
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

         end = clock();
    printf("\n\nTime taken: %lf seconds\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}