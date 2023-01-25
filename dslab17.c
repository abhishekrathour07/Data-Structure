#include <stdio.h>
#include <string.h>

void main()
{
    char st1[55] = "Flowers";
    char st2[] = " are beautiful";
    int l = strlen(st1);
   strcat(st1,st2);
    printf("The lenght of the string is %d\n", l);
    printf("The lenght of the string is %s\n", st1);

}