#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

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
typedef struct stack
{
    int data;
    struct stack *next;
} stack;
stack *top;

int stackEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
void push()
{
    stack *p;
    if (top == NULL)
    {
        green();
        top = (stack *)malloc(sizeof(stack));
        printf("\nEnter the data");
        scanf("%d", &top->data);
        top->next = NULL;
    }
    else
    {
        white();
        p = (stack *)malloc(sizeof(stack));
        printf("\nEnter the data");
        scanf("%d", &p->data);
        p->next = top;
        top = p;
    }
}
void pop()
{
    red();
    int i;
    stack *p;
    i = stackEmpty();
    if (i == 0)
    {
        p = top;
        top = top->next;
        printf("\nDeleted element is %d\n", p->data);
        free(p);
    }
    else
    {
        red();
        printf("stack is empty");
    }
}
void display()
{
    stack *p;
    p = top;
    while (p != NULL)
    {
        green();
        printf("\n%d\t", p->data);
        p = p->next;
    }
}

void main()
{
    int number, guess;
    do
    {
        load();
        srand(time(0)); //generating different number in every runtime.
        number = rand();
        white();
        printf("\nEnter the captcha code\n");
        printf("%d\n", number);
        printf("Enter here :");
        scanf("%d", &guess);
        if (guess == number){
        blue();
        green();
            printf("\n**login successfully**\n");
        }
        else
        {
            red();
            printf("\nEnter correct captcha\n");
        }
    } while (number != guess);
    int choice;
    top = NULL;
    while (1)
    {
        green();
        printf("\n=============== STACK USING SINGLE LINKED LIST ===============\n");
        white();
        printf("\nChoose any option\n 1.Push \n 2.pop \n 3.display \n 4.exit \n");
        green();
        printf("\n===============================================================\n");
        white();
        printf("Enter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            load();
            pop();
            break;
        case 3:
            load();
            display();
            break;
        case 4:
            yellow();
            printf("THANK YOU FOR VISITING ON LINKRD LIST\n");
            load();
            exit(1);
            break;
        }
    }
}