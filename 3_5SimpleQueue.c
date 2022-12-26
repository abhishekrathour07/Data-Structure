// program of simple queue.
#include <stdio.h>

struct queue
{
    int Q[10];
    int rear, front;
} q;

int queueEmpty()
{
    if (q.rear == -1 && q.front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int queueFull()
{
    if (q.rear == 9)
    {
        return 1;
    }
    else
        return 0;
}
void Enqueue()
{
    int i, x;
    i = queueFull();
    if (i == 0)
    {
        q.rear++;
        printf("enter the value");
        scanf("%d", &x);
        q.Q[q.rear] = x;
        if (q.rear == 0)
        {
            q.front = q.rear;
        }
    }
    else
    {
        printf("Queue is full");
    }
}
void dequeue()
{
    int i, x;
    i = queueEmpty();
    if (i == 0)
    {
        x = q.Q[q.front];
        printf("Deleted element = %d", x);
        q.front++;
        if (q.front > q.rear+1)
        {
            q.rear = -1;
            q.front = -1;
        }
    }
    else
    {
        printf("Queue is empty");
    }
}
void display()
{
    int i;
    for (i = q.front; i <= q.rear; i++)
    {
        printf("%d\t",q.Q[i]);
    }
}
int main()
{
    int choice;
    q.rear =q.front =-1;
    while (1)
    {
        printf("Enter your choice......\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
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
        default:
            printf("Enter valid choice");
        }
    }
}
 