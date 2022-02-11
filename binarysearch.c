/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:29/11/2021
CLASS:S3,IT                                   
ROLL NO:17                  BINARY SEARCH                               

***************************************************************************/

/*PROGRAM
---------*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[50],i,n,num,high,low,mid;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	}
	printf("Enter the number to be searched");
	scanf("%d",&num);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while (low<=high)
	{
	 if (a[mid]==num)
  	  {
	printf("\n ELEMENT %d FOUND AT %d",num,mid+1);
	break;
      }	 
  	else if (a[mid]<num)
	low=mid+1;
	else 
	 high=mid-1;
	mid=(low+high)/2;
	}
  if(low>high)
     {
   printf("\n ELEMENT NOT FOUND");
   getch();
     }
} 
 
 /*SAMPLE OUTPUT
 Enter the size of array 6
Enter the elements 4 5 6 8 9 7
Enter the number to be searched 9

 ELEMENT 9 FOUND AT 5*/
   
