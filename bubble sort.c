/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:29/11/2021
CLASS:S3,IT                                   
ROLL NO:17                  BUBBLE SORT                               

***************************************************************************/

/*PROGRAM
---------*/
#include<stdio.h.>
#include<conio.h>
main()
{
	int a[50],i,j,n,swap;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	printf("THE SORTED ARRAY IS \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

/* SAMPLE OUTPUT
   -------------
Enter the size of array 4
Enter the elements 6 3 2 1
THE SORTED ARRAY IS
1236 */
