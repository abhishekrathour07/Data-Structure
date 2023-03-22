//Q.no 11
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct cqueue
{
	int data;
	struct cqueue *next;
} cqueue;
cqueue *rear, *front;
int cq_empty()
{
	if (rear == NULL && front == NULL)
		return 1;
	else
		return 0;
}
void cq_enqueue()
{
	if (rear == NULL)
	{
		rear = (cqueue *)malloc(sizeof(cqueue));
		printf("Enter Data ");
		scanf("%d", &rear->data);
		rear->next = rear;
		front = rear;
	}
	else
	{
		rear->next = (cqueue *)malloc(sizeof(cqueue));
		rear = rear->next;
		printf("Enter data ");
		scanf("%d", &rear->data);
		rear->next = front;
	}
}
void cq_dequeue()
{
	cqueue *p;
	int i;
	i = cq_empty();
	if (i == 0)
	{
		p = front;
    if (rear == front)
			rear = front = NULL;
    else
     {
		front = front->next;
		rear->next = front;
    }
		printf("Deleted node is %d ", p->data);
			free(p);
	}
	else
		printf("Cq is empty");
}
void display()
{
	cqueue *p;
	p = front;
	while (p != rear)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("%d", p->data);
}
void main()
{
	
	int ch;
	rear = NULL;
	front = NULL;
	while (1)
	{
		printf("\nEnter your choice\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			cq_enqueue();
			break;
		case 2:
			cq_dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
		default:
			printf("Enter correct choice ");
		}
	}
}