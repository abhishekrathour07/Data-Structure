#include<stdio.h>         

void main(){
    int search,i,a[20],size,c=0;
    printf("Enter the size of an array");
    scanf("%d",&size);
    printf("Enter the element in the array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
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
}