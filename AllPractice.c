#include<stdio.h>

void main(){
    int a[20],i,x,pos,choice,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the element in the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(1){
        printf("Enter your choice\n 1.insert \n 2.insert last \n3.display\n 4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the data");
            scanf("%d",&x);
            for(i=(n-1);i>0;i--){
                a[i+1]=a[i];
            }
            a[0]=x;
            n=n+1;
            break;
            case 2:
            printf("Enter your choice\n");
            scanf("%d",&x);
            a[n-1] =x;
            n =n+1;
            break;
            case 3:
            for(i=0;i<n;i++){
                printf("%d\t",a[i]);
            }
            break;
            case 4:
            exit(1);
            break;
            default :
            printf("ENter the correct choice");
        }
    }
}