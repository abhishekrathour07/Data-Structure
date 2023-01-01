// program of priority queue

#include<stdio.h>
#include<stdlib.h>

struct Pqueue{
    int Q[2][10];
    int front,rear;

}q;
int PQ_empty(){
    if(q.rear==-1 && q.front==-1){
        return 1;
    }
    else{
        return 0;

    }
}
int PQ_full(){
    if(q.rear==9){
        return  1;
    }
    else{
        return 0;
    }
}
void PQ_Enqueue(){
    int i ,x,p;
    i= PQ_full();
    if(i==0){
        q.rear++;
        printf("Enter the data");
        scanf("%d",&x);
        q.Q[0][q.rear]=x;
        printf("Enter the priority");
        scanf("%d",&p);
        q.Q[1][q.rear]=p;
        if(q.rear==0){
            q.front = q.rear;
        }
    }
        else
        printf("PQ if full");
}
void PQ_dequeue(){
    int x,p,i,j,t1,t2,k;
    k=PQ_empty();
    if(k==0){
        for(i=q.front;i<q.rear;i++){
            for(j=q.front+1;j<=q.rear;j++){
                if(q.Q[1][i]> q.Q[1][j]){
                    t1 = q.Q[1][i];
                    t2 = q.Q[0][i];
                     q.Q[1][i] = q.Q[1][j];
                     q.Q[0][i] = q.Q[0][j];
                     q.Q[1][j] =t1;
                     q.Q[0][j] =t2;
                }
            }
        }
        x= q.Q[0][q.front];
        p= q.Q[1][q.front];
        printf("Deleted element %d with priority %d",x,p);
        q.front++;
        if(q.front>q.rear){
            q.front =-1;
            q.rear =-1;
        }
    }
    else{
        printf("DQ is empty");
    }
}
void display(){
    int i,j;
    for(i=0;i<2;i++){
        for(j=q.front;j<=q.rear;j++){
            printf("%d\t",q.Q[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int choice;
    q.rear=-1,q.front=-1;
        while(1)
        {
            printf("\nEnter your choice......\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                   PQ_Enqueue();
                    break;
                case 2:
                    PQ_dequeue();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    exit(1);
                    break;
                default :
                    printf("Enter valid choice");
            }
        }
}