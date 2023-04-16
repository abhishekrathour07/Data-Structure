#include<stdio.h>

void main(){
    int a[20],n,i;
    printf("Enter the size if array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array element are\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    printf("reversal of array are\n");
    for(i=(n-1);i>=0;i--){
        printf("%d\t",a[i]);
    }
}