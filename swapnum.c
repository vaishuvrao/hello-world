#include<stdio.h>
int main()
{
int temp,a,b;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("n1=%d,n2=%d\n",a,b);
return 0;
}
