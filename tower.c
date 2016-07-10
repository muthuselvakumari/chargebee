#include<stdio.h>
int tower(int n,char s,char t,char d)
{
if(n==1){
printf("\n the %d disk is moved from %c --> %c",n,s,d);
return 0;}
tower(n-1,s,d,t);
printf('\n the %d disk is moved from %c --> %c",n,s,d);
tower(n-1,t,s,d);}
int main()
{
int n;
char s='a',t='b',d='c';
printf("enter no of disk:");
scanf("%d",&n);
toh(n,s,t,d);
return 0;
}
