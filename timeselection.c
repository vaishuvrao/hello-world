#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

/* Function tovsort an array using insertion sort*/
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    int arr[1000000];
    int n1,n2,n3;
    clock_t t;
   printf("Enter n1");
   scanf("%d",&n1); 
for(int i = 0; i<n1; i++) 
    {
		
     arr[i]=rand();
     }
 t = clock();
   selectionSort(arr, n1);
    t = clock() - t;
    double tt3 = ((double)t)/CLOCKS_PER_SEC;
printf("\nsort             n1=%d     ",n1);
 printf("\n=============================");     
 printf("\nSelection        %f      ",tt3); 

return 0;
}
