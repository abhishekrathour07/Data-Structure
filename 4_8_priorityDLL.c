#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;

    int priority;
    struct queue *next;

} queue;
queue *rear, *front;
int pqempty()
{
    if (rear == NULL && front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void pq_enqueue(){
    if(rear==NULL ){
        rear = (queue*)malloc(sizeof(queue));
        printf("Enter data and priority");
        scanf("%d %d",&rear->data ,&front->data);
        front =rear;
        }
        else{
            rear->next = (queue*)malloc(sizeof(queue));
            rear = rear->next;
            printf("Enter the data and priority");
            scanf("%d %d",&rear->data,&rear->priority);
            rear ->next =NULL;
        }
    }

void pq_dequeue(){
    int t1,t2;
    queue *p,*q;
    p = front;
    while(p!=NULL){
        q =p->next;
        while(q!=NULL){
            if(p->priority>q->priority){
                t1 =p->priority;
                t2 = q->data;
                p->priority =q->priority;
                p->data =q->data;
                q->priority =t1;
                q->data=t2;
            }
            q =q->next;
        }
        p =p->next;
    }
    p =front;
    front = front->next;
    printf("Deleted node with data %d and priority %d",p->data,p->priority);
    free(p);
}

void display(){
    queue *p;
    p =front;
     while(p!=NULL){
        printf("%d %d",p->data,p->priority);
        p = p->next;
     }
}
void main(){
    int choice;
while(1){
    printf("Enter your choice\n 1).PQ enqueue 2). PQ Dequeue 3).Display 4).Exit\n");
    scanf("%d",&choice);
    switch(choice){
        
    }

}
}