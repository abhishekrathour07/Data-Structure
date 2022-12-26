#include<stdio.h>
int factorial(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x* factorial(x-1);
    }
}
void main(){
    int num;
    printf("Enter the number to find factorial");
    scanf("%d",&num);

    printf("THe factorial of %d is %d",num,factorial(num));


}