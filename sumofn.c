#include<stdio.h>
int main()
{
int n,i,s=0;
printf("Enter the Value\n");
scanf("%d", &n);
for(i = 16; i <= n; i++)
{
s = s + i;
}
printf("sum is  = %d",s);
return 0;
}
