#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void red()
{
    printf("\033[1;31m");
}
// green color text
void green()
{
    printf("\033[1;32m");
}

// yellow colour text
void yellow()
{
    printf("\033[1;33m");
}


void purple()
{
    printf("\033[1;35m");
}
void cyan()
{
    printf("\033[1;36m");
}


// blue colour of text
void blue()
{
    printf("\033[1;34m");
}
// for white
void white()
{
    printf("\033[1;37m");
}
// for loading
int load()
{
    int i;
    while (1)
    {
        blue();
        printf("LOADING\t");
        for (i = 0; i < 3; i++)
        {
            red();
            Beep(1200, 500);

            printf(">>");

            Beep(1200, 500);
        }
        system("cls"); // for clearing the terminal screen
        break;
    }
}
typedef struct node
{
 int data;
 struct node *next;
}node;
node *head;

//printing the data
void printing()
{
  green();
  node *p;
  p=head;
  printf("\n\n\n");
  while(p!=NULL)
  {
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
}
//counting data
void counting()
{
  blue();
  int c=0;
  node *p;
  p=head;
  printf("\n\n\n");
  while(p!=NULL)
  {
   c++;
   p=p->next;
  }
 printf("number of nodes are %d",c);
}
//searching the node
void searching()
{
  cyan();
  int x,i=0,c=0;
  node *p;
  p=head;
  printf("Enter the data to be search\n");
  scanf("%d",&x);
   printf("\n\n\n");
  while(p!=NULL)
  {
    i++;
    if(x==p->data)
    {
    printf("%d data found at %d index",x,i);
    c=1;
    }
    p=p->next;
  }
  if(c==0)
  {
    red();
   printf("invalid data its not present in the list");
  }
}
//INSERTION AT TYHE BEGINNING
void insertion_at_the_beginning()
{
  white();
  node *n;
  n=(node*) malloc(sizeof(node));
   printf("\n\n\n");
  printf("Enter the data\n");
  scanf("%d",&n->data);
  n->next=NULL;
  n->next=head;
  head=n;
}
//INSERTION AT LAST
void insertion_at_last()
{
  blue();
 node *p,*n;
 n=(node*)malloc(sizeof(node));
 printf("Enter the data");
 scanf("%d",&n->data);
 n->next=NULL;
 p=head;
 while(p->next!=NULL)
 {
   p=p->next;
 }
p->next=n;
}
//INSERTION AT ANY PO9STION
void insertion_at_any_position()
{
  yellow();
  int pos,i;
  node *n,*p;
  n=(node*)malloc(sizeof(node));
  printf("Enter the data\n");
  scanf("%d",&n->data);
  n->next=NULL;
  printf("Enter the position where the node is to be inserted\n");
  scanf("%d",&pos);
  p=head;
  for(i=1;i<(pos-1);i++)
  {
    p=p->next;
  }
 n->next=p->next;
 p->next=n;
}
//DELETION AT FRONT
void deletion_at_front()
{
 node *p;
 p=head;
 head=head->next;
 printf("deleted data = %d",p->data);
 free(p);
}
//VOID DELETION AT THE LAST
void deletion_at_last()
{
  red();
  node *p,*q;
  p=head;
  while(p->next!=NULL)
  {
   p=p->next;
  }
  q=head;
  while(q->next->next!=NULL)
  {
   q=q->next;
  }
  q->next=NULL;
  free(p);
}
//VOID DELETION_AT_ANY_POSITION
void deletion_at_any_position()
{
  red();
  node *p,*q;
  int pos,i;
  p=head;
  printf("Enter the position to br deleted");
  scanf("%d",&pos);
  for(i=1;i<(pos-1);i++)
  {
    p=p->next;
  }
  q=p->next;
  p->next=q->next;
  free(q);
 }
 void sorting()
 {
  cyan();
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
  green();
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
    sorting();
}
void split()
{
  white();
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

void main()
 {
   int n,i,ch;
   node *p;
  purple();
   printf("Enter the number of node\n");
   scanf("%d",&n);
   head=(node*)malloc(sizeof(node));
   printf("Enter the data inside the node: ");
   scanf("%d",&head->data);
   head->next=NULL;
   p=head;
   for(i=1;i<n;i++)
   {
     p->next=(node*)malloc(sizeof(node));
     p=p->next;
     printf("Enter the data inside the node: ");
     scanf("%d",&p->data);
     p->next=NULL;
   }
   while(1)
   {
       white();printf("\n============  "); cyan();printf("LINKED LIST"); white();printf("  =============="); 
     printf("\nCHOOSE ANY OPTION\n1:PRINTING\n2:COUNTING\n3:SEARCHING\n4:INSERTION AT BEGINNING\n5:INSERTION AT LAST\n6:INSERTION AT ANY POSITION\n7:DELETION AT BEGINNING\n8:DELETION AT LAST\n9:DELETION AT ANY POSITION\n10:SORTING\n11:CONCATINATION\n12:MERGING\n13:SPILITING\n14:EXIT\n");
     printf("=========================================\n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
       load();
	      printing();
	      break;
       case 2:
       load();
	       counting();
	       break;
       case 3:
       load();
	       searching();
	       break;
       case 4:
        load();
	      insertion_at_the_beginning();
	       break;
       case 5:
        load();
	      insertion_at_last();
	      break;
       case 6:
        load();
	      insertion_at_any_position();
	      break;
       case 7:
        load();
	       deletion_at_front();
	       break;
       case 8:
        load();
	       deletion_at_last();
	       break;
       case 9:
        load();
	       deletion_at_any_position();
	       break;
       case 10:
        load();
	      	sorting();
		     break;
       case 11:
        load();
             concat();
             break;
       case 12:
        load();
             merging();
             break;
       case 13:
        load();
               split();
               break;

       case 14: 
       cyan();
       printf("=== EXITING LINKED LIST ===\n");
        load();
        exit(1);
                break;       
       default:     
	       printf("Enter correct choice\n");
           break;
      }
    }
 }