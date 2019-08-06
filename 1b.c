#include<stdio.h>
#include<stdlib.h>
int main(void){

char c;
char *str;
printf("Enter ur choice to look for environment variables\n\t\ta.USER\n\t\tb.HOME\n\t\tc.PWD\n\t\td.PATH\n");
scanf("%c",&c);
switch(c)
{ 
case 'a':str=getenv("USER");
	printf("%s\n",str);
	break;
case 'b':str=getenv("HOME");
	printf("%s\n",str);
	break;
case 'c':str=getenv("PWD");
	printf("%s\n",str);
	break;
default:str=getenv("PATH");
	printf("%s\n",str);
	break;
}
}



