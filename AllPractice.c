#include<stdio.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *head;
void deletepos(){
    node *p,*q;
    int i,pos;
    p=head;
    printf("enter the pos to be deleted");
    scanf("%d",&pos);
    for(i=1;i<pos-1;i++){
        p= p->next;
    }
    q =p ->next;
    p->next =q->next;
}
void print(){
    node *p;
    p=head;
    while(p!=NULL){
        printf("%d->",p->data);
        p = p->next;
    }
}

void main(){
    int i,n;
    node *p;
    printf("Enter the no of nodes");
    scanf("%d",&n);
    head =(node *)malloc(sizeof(node));
    printf("enter the data");
    scanf("%d",&head->data);
    head->next = NULL;
    p=head;
    for(i=1;i<n;i++){
        p->next =(node *)malloc(sizeof(node))
    }

}