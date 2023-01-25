// Ques number 6
#include<stdio.h>
 #include<stdlib.h>
 struct cqueue
 {
    int Q[10];
    int rear,front;
 }q;
 int cqueue_empty()
 {
    if(q.rear==-1 && q.front==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }
    int cqueue_full()
    {
        if(q.front==((q.rear+1)%10))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void cqueue_enqueue()
    {
        int i,x;
        i=cqueue_full();
        if(i==0)
        {
            q.rear=(q.rear+1)%10;
            printf("Enter a value");
            scanf("%d",&x);
            q.Q[q.rear]=x;
            if(q.rear==0)
            {
                 q.front=q.rear;
            }
        }
        else
        {
            printf("CQ is full");
        }
    }
    void cqueue_dequeue()
    { 
        int x,i;
        i=cqueue_empty();
        if(i==0)
        {
            x=q.Q[q.front];
            printf("Deleted value is %d",x);
            q.front=(q.front+1)%10;
            if(q.front==((q.rear+1)%10))
            {
                q.front=-1;
                q.rear=-1;
            }
        }
        else
        {
            printf("\nCQ is empty\n");
        }
    }
    void display()
    {
        int i;
        for(i=q.front;i<=q.rear;i++)
        {
            printf("%d\t",q.Q[i]);
        }
        // printf("%d\n",q.Q[i]);
    }
    int main()
    { 
        int ch;
        q.rear=-1,q.front=-1;
        while(1)
        {
            printf("\nEnter your choice......\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    cqueue_enqueue();
                    break;
                case 2:
                    cqueue_dequeue();
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