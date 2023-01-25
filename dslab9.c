// Ques number 9
#include <stdio.h>

struct stack
{
    int s[10];
    int top;
} s1;
int stackempty()
{
    if (s1.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stackfull()
{
    if (s1.top == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push()
{
    int x, i;
    i = stackfull();
    if (i == 0)
    {
        s1.top++;
        printf("Enter the value to push");
        scanf("%d", &x);
        s1.s[s1.top] = x;
    }
    else
        printf("stack is full");
}
void pop()
{
    int x, i;
    i = stackempty();
    if (i == 0)
    {
        x = s1.s[s1.top];
        printf("Deleted element = %d", x);
        s1.top--;
    }
    else
        printf("stack is empty");
} 
void display()
{
    int i;
    for (i = s1.top; i > 0; i--)
    {
        printf("%d\t", s1.s[i]);
    }
}
void count()
{
    printf("The number of element in stack = %d", s1.top);
} 
void main()
{
    int choice;
    while (1)
    {
        printf("\nEnter your choice\n1.push\n2.pop\n3.display\n4. count\n5.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            count();
            break;
        case 5:
            exit(1);
            break;
        }
    }
}