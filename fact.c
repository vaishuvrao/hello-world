#include<stdio.h>
int main()
{
int n,i,fact;
printf("enter the number\n");
fact=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial is=%d\n",fact);
}
