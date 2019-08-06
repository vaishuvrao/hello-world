#include<stdio.h>
int main()
{
char string[50];
printf("enter the string throgh gets\n");
gets(string);
printf("%s",string);
return 0;
}
//using gets will show some error stating it ll be dangerous but it ll compile.
