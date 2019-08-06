#include<stdio.h>
int main()
{
int n1,n2,n;
float f1;
char c1;
printf("1.Intergers\n 2.Floating\n 3.characters\n");
printf("Enter ur choice\n");
scanf("%d",&n);
if(n==1){
printf("enter two integers");
scanf("%d%d",&n1,&n2);
printf("%d %d",n1,n2);
}
else if(n==2){
printf("enter floating point");
scanf("%f",&f1);
printf("%f",f1);
}
else{
printf("enter characeters point");
scanf("%c",&c1);
printf("%c",c1);
}
return 0;
}


