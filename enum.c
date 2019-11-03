#include<stdio.h>

void main()
{
enum week {sun, mon, tue, wed, thu, fri, sat};
int i;
for(i=sun; i<=sat; i++)
{
 printf("%d ",i); 
} 
getch();
}
