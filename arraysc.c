#include<stdio.h>
#include<conio.h>
void main()
{
int arraysc[10];
int a,b,c;
clrscr();
printf("Enter 10 elements:");
for(a=0;a<10;a++)
scanf("%d",&arraysc[a]);
for(a=0;a<9;a++)
{
for(b=a+1;b<10;b++)
{
if(arraysc[a]<arraysc[b])
{
c=arraysc[a];
arraysc[a]=arraysc[b];
arraysc[b]=c;
}
}
}
printf("\nsorted array elements:\n");
for(a=0;a<10;a++)
printf("%d",arraysc[a]);
getch();
}
