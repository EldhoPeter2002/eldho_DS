/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:13/12/2021
CLASS:S3,IT                                   
ROLL NO:17                  MERGE SORT                               

***************************************************************************/

/*PROGRAM
---------*/
#include<conio.h>
#include<stdio.h>
int merge(int a[100],int l, int mid, int u)
{
	int i=l;
	int j=mid+1;
	int k=l;
	while(i<=mid && j<=u)
	{
		int b[20];
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	int b[20];
	if(i>mid)
	{
		while(j<=u)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
		{
			while(i<=mid)
			{
				b[k]=a[i];
				i++;
				k++;
			}
		
		}
		for(k=l;k<=u;k++)
		{
			a[k]=b[k];
		}
}

int mergesort(int a[], int l,int u)
{
	if(l<u)
	{
		int mid=(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
		merge(a,l,mid,u);
	}
}
int main()
{
	int n , i , a[20] ;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe unsorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	int l=0;
	int u=n-1;
	printf("\nThe sorted array is: ",mergesort(a,l,u));
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	
}
/* SAMPLE OUTPUT
   -------------
Enter the size of the array: 6
Enter the values of the array: 7 1 8 2 9 3

The unsorted array is: 7  1  8  2  9  3
The sorted array is: 1  2  3  7  8  9*/ 
