#include<stdio.h>

void main(){
int search,a[20],n,i,c=0;
printf("Enter the size of an array");
scanf("%d",&n);
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Enter the data to be search");
scanf("%d",&search);
for(i=0;i<n;i++){
    if(search==a[i]){
        printf("%d is found at %d position",search,i+1);
        c=1;
}
}
 if(c==0){
 printf("Element not found");
    }
}