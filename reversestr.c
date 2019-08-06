#include <stdio.h>
#include <string.h>
int main()
{
char arr[100];
printf("Enter a string\n");
gets(arr);
strrev(arr);
printf("Reverse is %s\n", arr);
return 0;
}
