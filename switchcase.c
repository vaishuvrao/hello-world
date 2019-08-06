#include<stdio.h>
int main()
{
char weeks;

printf("enter the choice\n");
scanf("%c",&weeks);
switch(weeks)
{
case 'A':printf("monday\n");
	break;
case 'B':printf("TUESDAY\n");
	break;
case 'C':printf("WEDNESDAY\n");
	break;
case 'D':printf("THURSDAY\n");
	break;
case 'E':printf("FRIDAY\n");
	break;
case 'F':printf("SATURDAY\n");
	break;
dafault :printf("SUNDAY\n");
}
}
