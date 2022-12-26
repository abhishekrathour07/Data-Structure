#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<windows.h>
 void reset()// for reset color to white 
 {
    printf("\033[0m");
 }




void green()//green color text
{
    printf("\033[1;32m");
   
}

void blue(){
    printf("\033[1;34m");
}



int load()
{
    int i;
while(1)
{
    green();
printf("LOADING\t");
reset();
for(i=0;i<3;i++)
{
    blue();
     Beep(1000,500);
    
      printf(">>>\t");

     Beep(4000,500); reset();
}
system("cls");
break;
}}  

int battery()
{
int batt=100;

    printf("%d%",batt);
    sleep(59);
    batt--;
    system("cls");
    if(batt<=20){
    Beep(4000,500);
    printf("battry low please plug in the charger");
    Beep(4000,500);}
    
}

int clock()
{
int seconds,minutes,hours;
printf("enter the time as the given format HH:MM:SS\n");
scanf("%d%d%d",&hours,&minutes,&seconds);
if(minutes==1)
{
    seconds++;
    if(seconds>59)
    {
        minutes++;
        seconds=0;
    }
    if(minutes>59)
    {
         hours++;
        minutes=0;
    }
    if(hours>23)
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    green();
    printf("%d:%d:%d",hours,minutes,seconds);
    reset();
     sleep(1);
     system("cls");

}}



int main()
{
    load();
    int seconds,minutes,hours=0,batt=100;
printf("enter the time as the given format HH:MM:SS\n");
scanf("%d%d%d",&hours,&minutes,&seconds);
while(1)
{
    seconds++;
    if(seconds>59)
    {
        minutes++;
        seconds=0;
    }
    if(minutes>59)
    {
         hours++;
        minutes=0;
    }
    while((minutes==1|| minutes==4||minutes==7||minutes==10)&&(seconds==45||seconds==10,12,40)){
    batt--;
    }
    if(hours>23)
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    green();
    printf("TIME:- %d:%d:%d\t\t\t\tBATTERY:- %d%",hours,minutes,seconds,batt);
    reset();
     sleep(1);
     system("cls");
    
   }
return 0;
}