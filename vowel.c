#include<stdio.h>
int main()
{
char c;
int upper,Lower;
printf("enter the vowel\n");
scanf("%c",&c);

upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
Lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
if(upper||Lower)
printf("%c is a vowel \n",c);
else
printf("Not an vowel\n");
return 0;
}
