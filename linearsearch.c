/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:29/11/2021
CLASS:S3,IT                                   
ROLL NO:17                  LINEAR SEARCH                               

***************************************************************************/

/*PROGRAM
---------*/

#include<stdio.h.>
#include<conio.h>
main()
{
	int a[50],i,n,num;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	}
	printf("Enter the number to be searched");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
    	if (a[i]==num)
		{
		 printf("ELEMENT %d IS FOUND AT %d  ",a[i],i+1);
		break;
        }
    }
	   if (a[i]!=num)
	    {
	      printf("\n ELEMENT NOT FOUND");
        }
    
}
	
/* SAMPLE OUTPUT
   -------------
Enter the size of array 5
Enter the elements 1 4 2 9 8
Enter the number to be searched 9
ELEMENT 9 IS FOUND AT 4 */

	
