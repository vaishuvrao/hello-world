#include<stdio.h>

int main()
{
int m,o,a[10][10],b[10][10],n,temp;
    printf("\nEnter the dimension of the matrix:");
    scanf("%d", &n);
printf("\nEnter the %d elements of the matrix: \n\n",n*n);
    for(m= 0; m< n; m++) 
        for(o = 0;o<n;o++)
            scanf("%d", &a[m][o]);
for(m = 0; m<n; m++) 
        for(o=0;o<n;o++) 
            b[o][m] = a[m][o];
    printf("\n\nThe original matrix is:");
    for(m=0;m<n;m++)  
    {
        for(o=0;o<n;o++)   
        {
            printf("%d\t", a[m][o]);
        }
       }
}
