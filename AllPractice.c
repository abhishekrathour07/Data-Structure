#include<stdio.h>
struct queue{
    int Q[2][10];
    int rear ,front ;
}q;
int queuefull(){
    if (q.rear ==9){
        return 1; 
    }
    else 
    return 0;
}
int queueempty(){
   if(q.rear==-1 && q.front ==-1){
    return 1;
   }
   else{
    return 0;
   }
}
void inqueue(){
    int i,x,p;
    i=queuefull();
    if (i==0){
        q.rear++;
        printf("Enterthe data");
        scanf("%d",&x);
        q.Q[0][q.rear] =x;
        printf("Enter the priority");
        scanf("%d",&p);
        q.Q[1][q.rear]=p;
        if(q.rear ==0){
            q.front = q.rear;
        }
    }
    else 
    printf("queue is full");
}
void dequeue(){
    int i,x,p,j,k,t1,t2;
    i= queueempty();
    if(k==0){
        for(i=q.front ;i<q.rear;i++){
            for(j=q.front+1;i<q.rear;i++){
                if(q.Q[1][i]>q.Q[1][j]){
                    t1= q.Q[0][i];
                    t2 =q.Q[1][i];
                    q.Q[0][i] =q.Q[0][j];
                    q.Q[1][i] =q.Q[1][j];
                    q.Q[0][j] =t1;
                    q.Q[1][j] =t2;
                }
            }
        }
        x=q.Q[0][q.front];
        p=q.Q[1][q.front];
        printf("Deleted data =%d",x);
        printf("with priority %d",p);
        q.front++;
        if(q.front >q.rear){
            q.front =q.rear =-1;
        }
    }else
    printf("queue is empty");
}

void main(){

}
    
           