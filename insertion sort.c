/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:6/12/2021
CLASS:S3,IT                                   
ROLL NO:17                     INSERTION SORT                               

***************************************************************************
PROGRAM
-------*/

#include<stdio.h>
#include<conio.h>
main()
{
 int a[50],i,j,n,key;
 printf("Enter the size of array ");
 scanf("%d",&n);
 printf("Enter the elements ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
   for(i=1;i<n;i++)
   {
      key=a[i];
      j=i-1;
      while(j>=0 && key<a[j])
      
        {
 	      a[j+1]=a[j];
 	      --j;
        }
        a[j+1]=key;
    }
    printf("THE SORTED ARRAY IS \n");
   for(i=0;i<n;i++)
    {
 	 printf("%d \t",a[i]);
     }
}
/*SAMPLE OUTPUT
-------------
Enter th size of array 5
Enter the elements in array 9 7 3 6 5
3       5       6       7       9*/
