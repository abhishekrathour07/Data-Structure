#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("roots are real and equal");
        r1=-b/2*a;
        r2=-b/2*a;
        printf("the roots are %f,%f",r1,r2);
    }
    else if(d>0)
    {
        printf("roots are  real and different ");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        printf("the roots are %f,%f",r1,r2);
    }
    else if(d<0)
    {
        printf("roots are immaginary\n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("The roots are %f %f",r1,r2);

    }
   return 0; 
}