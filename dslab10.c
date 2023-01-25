// Ques no 10
#include <stdio.h>
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void  main()
{
    int a,b,c;
    printf("Enter the Three numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    int res=gcd(a,gcd(b,c));
    printf("GCD of three number is: ");
    printf("%d",res);
}