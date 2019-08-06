#include<stdio.h>
int main()
{
int fib1=0,fib2=1,fib3,n,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fib3=fib1+fib2;
printf("%d\n",fib3);
fib1=fib2;
fib2=fib3;
}

}
