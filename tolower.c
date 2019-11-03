#include <stdio.h>
#include <ctype.h>

int main()
{
   char ch;
   printf("Please Enter Any Valid Character: \n");
   scanf("%c", &ch);

   printf("\n We Converted Your character to Upper Case = %c", tolower(ch));         

}
