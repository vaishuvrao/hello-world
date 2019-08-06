#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>

int swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} 

void bubblesort(int a[],int n)
{
	int i,j;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
}

void insertionsort(int a[],int n)
{
	int pos,j,temp;
	for(pos=1;pos<=n;pos++)
	{
		temp=a[pos];
		for(j=pos;temp<a[j-1];j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
}

void selectionsort(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n-2;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
	swap(&a[i],&a[min]);
	}
}

int main()
{
int a[100000];
int b;
int n1,n2,n3;
clock t;
printf("\nenter urchoice");
scanf("%d",&n);
switch(b)
{
case '1':printf("\nFor bubble sort");
       printf("Enter n1");
       scanf("%d",&n1);
       for(int i = 0; i<n1; i++) {
	
		
     a[i]=rand();
     
 }
    t = clock();
    bubblesort(a, n1);
    t = clock() - t;
    double time_complexity1 = ((double)t)/CLOCKS_PER_SEC; 
    t = clock();
    insertionsort(a, n1);
    t = clock() - t;
    double time_complexity2 = ((double)t)/CLOCKS_PER_SEC; 
    t = clock();
    selectionsort(a, n1);
    t = clock() - t;
    double time_complexity3 = ((double)t)/CLOCKS_PER_SEC;
printf("\nBubble           %f        %f        %f",time_complexity1,time_complexity7,time_complexity13);
}
    break;
case '2':printf("\nFor bubble sort");
       printf("Enter n2");
       scanf("%d",&n2);
       for(int i = 0; i<n2; i++) 
    {
		
     a[i]=rand();
     }
     
    t = clock();
    bubblesort(a, n2);
    t = clock() - t;
    double time_complexity7 = ((double)t)/CLOCKS_PER_SEC; 
    t = clock();
    insertionsort(a, n2);
    t = clock() - t;
    double time_complexity8 = ((double)t)/CLOCKS_PER_SEC; 
    t = clock();
   selectionsort(a, n2);
    t = clock() - t;
    double time_complexity9 = ((double)t)/CLOCKS_PER_SEC;
 printf("\nInsertion        %f        %f        %f",time_complexity2,time_complexity8,time_complexity14); 
    break;
case '3':printf("\nFor bubble sort");
       printf("Enter n3");
       scanf("%d",&n3);
       for(int i = 0; i<n3; i++)
    {
		a[i]=rand();
   
    }
    t = clock();
    bubblesort(a, n3);
    t = clock() - t;
    double time_complexity13 = ((double)t)/CLOCKS_PER_SEC;   
    t = clock();
    insertionsort(a, n3);
    t = clock() - t;
    double time_complexity14 = ((double)t)/CLOCKS_PER_SEC; 
    t = clock();
   selectionsort(a, n3);
    t = clock() - t;
    double time_complexity15 = ((double)t)/CLOCKS_PER_SEC;
 printf("\nSelection        %f        %f        %f",time_complexity3,time_complexity9,time_complexity15);   

	break;
default: break;
}

/*printf("\nsort             n1=%d        n2=%d       n3=%d        ",n1,n2,n3);
 printf("\n====================================================================");    
 printf("\nBubble           %f        %f        %f",time_complexity1,time_complexity7,time_complexity13);
 printf("\nInsertion        %f        %f        %f",time_complexity2,time_complexity8,time_complexity14); 
 printf("\nSelection        %f        %f        %f",time_complexity3,time_complexity9,time_complexity15);   

return 0;*/
}
   
