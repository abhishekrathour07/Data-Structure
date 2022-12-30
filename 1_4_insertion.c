#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[20], i, x, n, pos, choice;
    printf("enter the array size");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("\n enter the datas");
        scanf("%d", &a[i]);
    }
    while (1){
        printf("enter your choice\n"
               "1. At Beginning\n2. last\n3. at array possition\n 4. display\n5. exit\n");
        scanf("%d", &choice);
       
        switch (choice){
        case 1:
         printf("enter the data to be inserted  ");
        scanf("%d", &x);
            for (i = (n - 1); i>0; i--){
                a[i + 1] = a[i];
            }
            a[0] = x;
            n = n ++;
            break;
        case 2:
         printf("enter the data to be inserted  ");
        scanf("%d", &x);
            a[n] = x;
            n = n + 1;
            break;
        case 3:
         printf("enter the data to be inserted  ");
        scanf("%d", &x);
        printf("Enter the position");
        scanf("%d",&pos);
            for (i = (n - 1); i >= (pos - 1); i--){
                a[i + 1] = a[i];
            }
            a[pos - 1] = x;
            n = n + 1;
            break;
        case 4:
            for (i = 0; i < n; i++)
                printf("%d\t", a[i]);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("enter correct choice");
        }
    }
    return 0;
}