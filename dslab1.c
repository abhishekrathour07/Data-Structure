// Ques number 1
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int search, i, j, size, c, choice, temp;
    int count,first,last,middle;
    int a[] = {4, 7, 3, 2, 1, 7, 9, 0};
    for(i=0;i<8;i++){
        printf("%d\t",a[i]);
    }
    while (1)
    {
        printf("\nEnter Your choice \n 1.linear search \n 2.Binary search \n 3.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be search");
            scanf("%d", &search);
            for (i = 0; i < 8; i++)
            {
                if (a[i] == search)
                {
                    printf("%d is present at %d position\n", search, i + 1);
                    c = 1;
                }
                if (c = 0)
                {
                    printf(" %d Element is not present", search);
                }
            }
            break;
        case 2:
        // using bubble sort for sorting element
 for(i=0;i<7;i++){
        count =0; //avoiding unwanted pass
        for(j=0;j<7-i;j++){ //n-1-i because avoiding the unnessessary  step during passes.
            if(a[j]>a[j+1]){
                int temp =a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
               count=1;
            }
        }
        if(count==0){
            break;
        }
      }
      for(i=0;i<8;i++){
        printf("%3d",a[i]);
      }
            printf("  Enter value to find\n");
            scanf("%d", &search);
            first = 0;
            last = 8- 1;
            while (first <= last)
            {
            middle = (first + last) / 2;
                if (a[middle] < search)
                    first = middle + 1;
                else if (a[middle] == search)
                {
                    printf("%d found at location %d.\n", search, middle + 1);
                    break;
                }
                else
                    last = middle - 1;
            }
            if (first > last)
                printf("Not found! %d isn't present in the list.\n", search);
            break;
        case 3:
            exit(1);
            break;
              default:
              printf("Enter the correct choice\n");
        }
    }
}