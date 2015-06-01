#include<stdio.h>
#include<cs50.h>
#include<math.h>
//int Check;
int assignment(int Check);
int main()
{
float change=0.00;
int doller;
int cents;
int count=0;
int check;
do
{
printf("O hai!  How much change is owed? \n");
change = GetFloat();
}
while(change<0);
doller=change;
change=change-doller;

cents = roundf(change*100);
//printf("%d",cents);
check= assignment(cents);
while(cents>=check)
{
count+=cents/check;
cents=cents%check;
//printf("\n cents %d",cents);

check=assignment(cents);
}

printf("\n %d",count);

}

int assignment(int cents)
{
int Check=25;
if(cents>=25)
Check=25;
else if (cents>=10)
Check=10;
else if (cents>=5)
Check=5;
else if (cents>=1)
Check=1;
return Check;
}
