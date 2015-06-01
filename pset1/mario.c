#include<stdio.h>
#include<cs50.h>

int main()

{
int Height;
int k=0;
int i=0;
int j=0;
int l=0;
do
{
printf("Height: ");
Height=GetInt();
}
while(Height<0 || Height > 23);

//printf("Height: %d \n",Height);

for (  i=Height ; i>0 ; i--)
{ 

for ( j=k+1;j<Height; j++)
{

printf(" ");
}
k++;
l=k;
while(l>0)
{
printf("#");
l--;
}
printf("\n");
}

}

