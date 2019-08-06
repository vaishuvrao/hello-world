#include<stdio.h>
int main()
{
int n,k=3,i,c,j;
printf("enter the range for finding the sum\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
for(j=2;j<k;j++)
{
if(k%j==0)
break;
}
if(c==i)
{
printf("%d",i);
i++;
}
}
}
