// Ques no 4 and 7
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;

void delete_pos()
{
    node *p, *q;
    int pos, i;
    p = head;
    printf("Enter the position to delete");
    scanf("%d", &pos);
    for (i = 1; i < (pos - 1); i++)
    {
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
}
void printing()
{
    node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
int main()
{
    node *p;
    int n, i, choice;
    printf("Enter the number of nodes");
    scanf("%d", &n);
    head = (node *)malloc(sizeof(node));
    printf("Enter data");
    scanf("%d", &head->data);
    head->next = NULL;
    p = head;
    for (i = 1; i < n; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        printf("Enter data");
        scanf("%d", &p->data);
        p->next = NULL;
    }
    while (1)
    {
        printf("\nEnter your choice\n 1.Delete \n 2.Display\n 3.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            delete_pos();
            break;
        case 2:
            printing();
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("Enter correct choice");
        }
    }
}