#include<stdio.h>

void main (){
    int i=1, sum =0 ,num;
    printf("enter the number \n");
    scanf("%d",&num);
    do{
        sum =sum +i;
        i++;
    }while(i<=num);
    printf("Sum =%d",sum);
}