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
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
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
    insertionSort(arr, n1);
    t = clock() - t;
    double tt2 = ((double)t)/CLOCKS_PER_SEC;
printf("\nsort             n1=%d       ",n1);
 printf("\n==================================");    

 printf("\nInsertion        %f       ",tt2); 
return 0;
}
