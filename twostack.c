#include<stdio.h>

struct stack{
    int s[10];
    int top1,top2;

}s1;
int stackempty(){
    if(s1.top1 =-1){
        return 1;
    }
    else 
    return 0;
}
int stack2empty(){
    if(s1.top2==10){
        return 1;
    }
    else 
    return 0;
}
void push1(){
    int i,x;
    i = stackfull();
    if(i==0){
        s1.top1++;
        printf("Enter a value to push");
        scanf("%d",&x);
        s1.s[s1.top1] =x;

    }
    else{
        printf("Stack is full");
    }
}
void push2(){
    int i,x;
    i= stackfull();
    if(i==0){
        s1.top2--;
        printf("Enter the value to be push");
        scanf("%d",&x);
        s1.s[s1.top2]=x;

    }
}
void pop1(){
int i,x;
i =stackempty();

}