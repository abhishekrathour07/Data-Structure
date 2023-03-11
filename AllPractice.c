// #include <stdio.h>
// #include <stdlib.h>
// struct queue
// {
//     int Q[10];
//     int rear, front;
// } q;

// int queueEmpty()
// {
//     if (q.rear == -1 && q.front == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int queueFull()
// {
//     if (q.rear == 9)
//     {
//         return 1;
//     }
//     else
//         return 0;
// }
// int cqueue_full()
// {
//     if (q.front == ((q.rear + 1) % 10))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void Enqueue()
// {
//     int i, x;
//     i = queueFull();
//     if (i == 0)
//     {
//         q.rear++;
//         printf("enter the value");
//         scanf("%d", &x);
//         q.Q[q.rear] = x;
//         if (q.rear == 0)
//         {
//             q.front = q.rear;
//         }
//     }
//     else
//     {
//         printf("Queue is full");
//     }
// }
// void dequeue()
// {
//     int i, x;
//     i = queueEmpty();
//     if (i == 0)
//     {
//         x = q.Q[q.front];
//         printf("Deleted element = %d", x);
//         q.front++;
//         if (q.front > q.rear + 1)
//         {
//             q.rear = -1;
//             q.front = -1;
//         }
//     }
//     else
//     {
//         printf("Queue is empty");
//     }
// }
// void cqueue_enqueue()
// {
//     int i, x;
//     i = cqueue_full();
//     if (i == 0)
//     {
//         q.rear = (q.rear + 1) % 10;
//         printf("Enter a value");
//         scanf("%d", &x);
//         q.Q[q.rear] = x;
//         if (q.rear == 0)
//         {
//             q.front = q.rear;
//         }
//     }
//     else
//     {
//         printf("CQ is full");
//     }
// }
// void cqueue_dequeue()
// {
//     int x, i;
//     i = queueEmpty();
//     if (i == 0)
//     {
//         x = q.Q[q.front];
//         printf("Deleted value is %d", x);
//         q.front = (q.front + 1) % 10;
//         if (q.front == ((q.rear + 1) % 10))
//         {
//             q.front = -1;
//             q.rear = -1;
//         }
//     }
//     else
//     {
//         printf("\nCQ is empty\n");
//     }
// }
// void display()
// {
//     int i;
//     for (i = q.front; i <= q.rear; i++)
//     {
//         printf("%d\t", q.Q[i]);
//     }
// }
// void cdisplay()
// {
//     int i;
//     for (i = q.front; i <= q.rear; i++)
//     {
//         printf("%d\t", q.Q[i]);
//     }
// }
// int main()
// {
//     int ch;
//     q.rear = -1, q.front = -1;
//     while(2){
//     printf("Which operation do you want to perform\n 1. simple queue operation\n 2. Circuar queue ooperation\n 3. exit\n");
//     scanf("%d", &ch);
//    switch(ch)
//     {
//         case 1:
//             printf("\nEnter your choice......\n1.Enqueue\n2.Dequeue\n3.Simple Q Display\n4.Exit\n");
//             scanf("%d", &ch);
//             switch (ch)
//             {
//             case 1:
//                 Enqueue();
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 exit(1);
//             default:
//                 printf("Enter valid choice");
//             }
        
//         break;
//     case 2:
//         printf("\nEnter your choice......\n1.circular enqueue\n2.circular dequeue\n3.circular Q display\n4.Exit\n");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             cqueue_enqueue();
//             break;
//         case 2:
//             cqueue_dequeue();
//             break;
//         case 3:
//             cdisplay();
//             break;
//         case 4:
//             exit(1);
//             break;
//         default:
//             printf("Enter the correct choice");
//             break;
//         }
//         break;
//         case 3:exit(1);
//         break;
//         default:
//         printf("enter the correct choice");
//         break;
//     }
    
// }
// }
#include<stdio.h>
#include<conio.h>

void main(){
    int a[20],i,j,n;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the element in the array\n");
    for(i=1 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        int temp =a[i];
      j=i-1;
      while(temp<a[j] &&j>=0){
        a[j+1] =a[j];
        j--;
      }
      a[j+1] =temp ;
        }

    printf("Sorted array are :-");
    for (i=0;i<n;i++)
    printf("%4d",a[i]);
}