# chargebee
#include<stdio.h>
#include<conio.h>
void main()
{
int val,di,pair,i,j;
clrscr();
printf("\n enter the value:");
scanf("%d",&val);
printf("\n enter the pair:");
scanf("%d",&pair);
for(i=0;i<2*val;i++)
{
di=2*val-i;
if(pair!=di)
{
printf("The pair is%d for days %d is %d\n",pair,j++,pair);
}
}
getch();
}
