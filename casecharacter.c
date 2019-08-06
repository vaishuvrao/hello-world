#include<stdio.h>
#include<string.h>
int main()
{
char c[100];
int i,n;
printf("EnTER THE STRIN\n");
gets(c);
for(i=0;c[i]!='\0';i++){
if(c[i]>='a' &&c[i]<='z')
{
c[i]=c[i]-32;
}
else if(c[i]>='A' && c[i]<='Z')
{
c[i]=c[i]+32;
}
}
printf("the modified string is %s\n",c);
}
