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


// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
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
    bubbleSort(arr, n1);
    t = clock() - t;
    double tt1 = ((double)t)/CLOCKS_PER_SEC;
printf("\nsort             n1=%d        ",n1);
 printf("\n==================================");    
 printf("\nBubble           %f       ",tt1);
return 0;
}

