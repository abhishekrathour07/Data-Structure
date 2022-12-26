// program of doubly queue
#include<stdio.h>
#include<stdlib.h>

struct dQ{
    int Q[10];
    int rear,front;
}q;
int dqempty(){
    if(q.rear==-1 && q.front ==-1)
    return 1;
    else
    return 0;
}
int dqfull_rear(){
    if(q.rear ==9)
    return 1;
    else
    return 0; 
}
int dqfull_front(){
    if(q.front==0)
    return 1;
    else
    return 0;
}
void insertion_from_rear(){
    int x,i;
    i= dqfull_rear();
    if(i==0){
        q.rear++;
        printf("Enter the value");
        scanf("%d",&x);
        q.Q[q.rear] =x;
        if(q.rear==0){
            q.front =q.rear;
        }
    }
    else
    printf("DQ is full");
}
void insertion_from_front(){
    int x,i;
    i= dqfull_front();
    if(i==0){
        if(q.front==-1){
            q.front++;
            q.rear++;
            printf("Enter the value");
            scanf("%d",&x);
        q.Q[q.front]=x;
        }
    else{
        q.front--;
        printf("Enter the value");
        scanf("%d",&x);
        q.Q[q.front]=x;
    }
    }
    else{
        printf("PQ is full from front end");
    }
}
void deletion_from_front(){
    int x,i;
    i=dqempty();
    if(i==0){
        x =q.Q[q.front];
        printf("Deleted value %d",x);
        q.front++;
        if(q.front>q.rear){
            q.front =q.rear =-1;
        }
    }
    else 
    printf("DQ is empty");
}
void deletion_from_rear(){
    int x,i;
    i= dqempty();
    if(i==0){
        x = q.Q[q.rear];
        printf("Deleted data %d",x);
        q.rear--;
        if(q.front>q.rear){
             q.front =q.rear =-1;
        }
    }
    else 
    printf("DQ is empty from rear end");
}
void display(){
    int i;
    for(i=q.front;i<=q.rear;i++){
        printf("%d\t",q.Q[i]);
    }
}
 int main()
    {
        int ch;
        q.rear=-1;
        q.front=-1;
        while(1)
        {
            printf("\nEnter your choice......\n1.insertion from rear \n2.deletion from rear\n3.insertion from front \n4.deletion from front\n5. display\n6.Exit\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    insertion_from_rear();
                    break;
                case 2:
                    deletion_from_rear();
                    break;
                case 3:
                    insertion_from_front();
                    break;
                case 4:
                    deletion_from_front();
                    break;
                case 5:
                    display();
                    break;
                case 6:
                    exit(1);
                    break;
                default :
                    printf("Enter valid choice");
            }
        }
    }