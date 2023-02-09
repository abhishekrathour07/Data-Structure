#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;
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
void counting()
{
    node *p;
    p = head;
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    printf("Nodes =%d", count);
}
void insert_begin()
{
    node *new;
    new = (node *)malloc(sizeof(node));
    printf("Enter the data");
    scanf("%d", &new->data);
    new->next = NULL;
    new->next = head;
    head = new;
}
void insert_last()
{
    node *new, *p;
    p = head;
    new = (node *)malloc(sizeof(node));
    printf("Enter the data");
    scanf("%d", &new->data);
    new->next = NULL;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new;
}
void insert_pos()
{
    node *p, *new;
    int pos, i;
    new = (node *)malloc(sizeof(node));
    printf("Enter the data");
    scanf("%d", &new->data);
    new->next = NULL;
    printf("Enter the positiion");
    scanf("%d", &pos);
    p = head;
    for (i = 1; i < (pos - 1); i++)
    {
        p = p->next;
    }
    new->next = p->next;
    p->next = new;
}
void delete_begin()
{
    node *p;
    p = head;
    head = head->next;
    free(p);
}
void delete_last()
{
    node *p, *q;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    q = head;
    while (q->next->next != NULL)
    {
        q = q->next;
    }
    q->next = NULL;
    free(p);
}
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
void searching()
{
    int x, c = 0, i = 0;
    node *p;
    printf("Enter the data to be search");
    scanf("%d", &x);
    p = head;
    while (p != NULL)
    {
        i++;
        if (x == p->data)
        {
            printf("%d is found at  %d position ", x, i);
            c = 1;
        }
        p = p->next;
    }
    if (c == 0)
    {
        printf("Element is not found");
    }
}
void sort()
{
    node *p, *q;
    int t;
    p = head;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
            q = q->next;
        }
        p = p->next;
    }
}
void concat()
{
    node *head1, *p;
    int n, i;
    printf("Enter the no.of nodes ");
    scanf("%d", &n);
    head1 = (node *)malloc(sizeof(node));
    printf("Enter data ");
    scanf("%d", &head1->data);
    head1->next = NULL;
    p = head1;
    for (i = 1; i < n; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        printf("Enter data ");
        scanf("%d", &p->data);
        p->next = NULL;
    }
    p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = head1;
}
void merging()
{
    concat();
    sort();
}
void split()
{
    node *p, *head1;
    int pos, i;
    printf("Enter position to split ");
    scanf("%d", &pos);
    p = head;
    for (i = 1; i < pos; i++)
    {
        p = p->next;
    }
    head1 = p->next;
    p->next = NULL;
    p = head;
    printf("\nFirst Linked List\n");
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
    printf("2nd Linked list\n");
    p = head1;
    while (p != NULL)
    {
        printf("%d->", p->data);
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
        printf("\nEnter your choice\n 1.printing\n 2.counting\n 3.insert at  begining\n 4.Insertion at last\n 5.Insertion at any position\n 6.Delete from begining\n 7.Deletion from last\n 8.Delete any position\n 9.Searching\n 10.Sorting\n 11.Concatination\n 12. Merging\n 13.Spliting\n 14.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printing();
            break;
        case 2:
            counting();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_last();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_begin();
            break;
        case 7:
            delete_last();
            break;
        case 8:
            delete_pos();
            break;
        case 9:
            searching();
            break;
        case 10:
            sort();
            break;
        case 11:
            concat();
            break;
        case 12:
            merging();
            break;
        case 13:
            split();
            break;
        case 14:
            exit(1);
            break; 
        default:
            printf("Enter correct choice");
            break;
        }
    }
}