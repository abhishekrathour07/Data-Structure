// program of tower of henoi
#include<stdio.h>

void towerofhenoi(int n,char A,char B, char C){
    if(n==1){
        printf("Move the disk from %c to %c\n",A,B);
        return ;
    }   
    else{
        towerofhenoi(n-1,A,C,B); 
        printf("Move the disk from %c to %c\n",A,B);
        towerofhenoi(n-1,C,B,A);
    } 
}
int main(){
    int n;
    printf("Enter the number of disk\n");
    scanf("%d",&n); 
    towerofhenoi(n,'A','B','C');
    return 0;
}