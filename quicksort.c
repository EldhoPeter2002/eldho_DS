/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:13/12/2021
CLASS:S3,IT                                   
ROLL NO:17                  QUICK SORT                               

***************************************************************************/

/*PROGRAM
---------*/
#include<stdio.h>
void quicksort(int a[50],int first ,int last)
{
	int i,j,pivot,temp;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		
		while(i<j)
		{
			while(a[i]<=a[pivot]&& i<last)
				i++;
			while(a[j]>a[pivot])
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
int main()
{
	int i,n,a[50];
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	quicksort(a,0,n-1);
	
	printf("THE SORTED ARRAY IS ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
/* SAMPLE OUTPUT
   -------------
  Enter the size of array 5
Enter the elements 7 8 6 2 9 
The sorted array is 2 6 7 8 9*/
   
