#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev, *next;
} node;
node *head;

void main()
{
    node *p, *q;
    int n, i;
    printf("Enter the number of nodes");
    scanf("%d", &n);
    head = (node *)malloc(sizeof(node));

    printf("ENter the data");
    scanf("%d", &head->data);
    head->prev = NULL;
    head->next = NULL;

    p = head;
    for (i = 1; i < n; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        q = p;
        p = p->next;
        printf("enter the data");
        scanf("%d", &p->data);
        p->next = head;
    }
    printf("Printing the data\n");
    p = head;
    while (p->next != head)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("%d\t", p->data);
}