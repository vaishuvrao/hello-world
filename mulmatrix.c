#include<stdio.h>
int main()
{
int i,j,k,a[10][10],b[10][10],c[10][10],n,m;
printf("enter nXn values of matrix\n");
scanf("%d%d",&n,&m);
printf("enter the first matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("resultant matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]*b[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t", c[i][j]);
}
}
}
