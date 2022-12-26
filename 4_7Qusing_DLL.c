#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next, *prev;
} queue;
queue *rear, *front;
int queueEmpty()
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

void enqueue(){
    queue *q;
    if (rear == NULL)
    {
        rear = (queue *)malloc(sizeof(queue));
        printf("Enter the data");
        scanf("%d", &rear->data);
        rear->next = NULL;
        rear->prev =NULL;
        front = rear;
    }
    else
    {
        rear->next = (queue *)malloc(sizeof(queue));
        q =rear;
        rear = rear->next;
        printf("Enter the data");
        scanf("%d", &rear->data);
        rear->next = NULL;
        rear->prev =q;
    }
}

void dequeue()
{
    queue *p;
    int i;
    i = queueEmpty();
    if (i == 0)
    {
        p = front;
        front = front->next;
        front->prev =NULL;
        free(p);
        if (front == NULL)
            rear = NULL;
    }
    else
    {
        printf("DEQUEUE IS EMPTY");
    }
}
void display()
{
    queue *p;
    p = front;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}


void main(){
     int choice;
    front = NULL;
    rear =NULL;
    while (1)
    {
        printf("Enter your choice\n 1.Push \n 2.pop \n 3.display \n 4.exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        }
    }
}