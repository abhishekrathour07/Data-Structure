#include<stdio.h>

struct queue{
    int s[10];
    int top,rear;
}s1;
int full(){
    if(s1.top==9){
        return 1;

    }else{
        return 0;
    }
}
int empty(){
    if(s1.top==-1 && s1.rear==-1){
        return 1;
    }else{
        return 0;
    }
}
