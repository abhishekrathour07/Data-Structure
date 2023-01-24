#include<stdio.h>         

void main(){
    int search,i,a[20],size,c,choice;
    int mid,l,r;
    printf("Enter the size of an array");
    scanf("%d",&size);
    printf("Enter the element in the array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    while(1){
        printf("\nEnter Your choice \n 1.linear search \n 2.Binary search \n 3.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
             printf("Enter the element to be search");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(a[i]==search){
            printf("%d is present at %d position",search,i+1);
            c=1;
        }
    if(c=0){
        printf(" %d Element is not present",search);
    }
    }
            break;
        case 2:
         printf("Enter the elements to be searched\n");
    scanf("%d", &search);
        l=0;
        r = size - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (search < a[mid])
            r = mid - 1;
        else if (search > a[mid])
            l = mid + 1;
        else if (search == a[mid])
        {   
            printf("%d Element is found at location %d", search, mid+1);
            break;
        }
        if (l > r)
        {
            printf("%d Element not found in the list\n", search);
        }
    }
        default:
            break;
        }
    }
    }
