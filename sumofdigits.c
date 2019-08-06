#include<stdio.h>
int main()
{
int n,digit,sum;
printf("enter the two numbers");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("sumis=%d",sum);
}
