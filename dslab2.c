// Ques number 2
#include<stdio.h>

void main(){
    int i,j,count,n,a[20];
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the element in the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);                                                                                    
    }
      for(i=0;i<n-1;i++){
        count =0; //avoiding unwanted pass
        for(j=0;j<n-1-i;j++){ //n-1-i because avoiding the unnessessary  step during passes.
            if(a[j]>a[j+1]){
                int temp =a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
               count=1;
            }
        }
        if(count==0){
            break;
        }
      }
      for(i=0;i<n;i++){
        printf("%3d",a[i]);
      }
      }