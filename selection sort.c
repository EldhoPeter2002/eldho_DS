/**************************************************************************
NAME:Eldho Peter Regi                                     DATE:6/12/2021
CLASS:S3,IT                                   
ROLL NO:17                  SELECTION SORT                               

***************************************************************************/

/*PROGRAM
---------*/ 
 #include<stdio.h>
main()
{
    int a[50], i,j,n,pos,swap;
  	printf("Enter th size of array ");
	scanf("%d",&n);
	printf("Enter the elements in array ");
    for(i=0;i<n;i++) 
    {
    scanf("%d",&a[i]); 
     } 
     for(i=0;i<n-1;i++)
    {
       pos=i;
       for(j=i;j<n;j++)
        {
		   if (a[pos]>a[j])
     	    pos=j;
   	    }
    if (pos!=i)
       {
 	  	swap=a[pos];
 	   	a[pos]=a[i];
      	a[i]=swap;
       }
    }
printf("THE SORTED ARRAY IS ");   
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}

/*SAMPLE OUTPUT
-------------
Enter th size of array 5
Enter the elements in array 9 7 3 6 5
3       5       6       7       9*/
