/*
 ============================================================================
 Name        : quiz_code_2.c
 Author      : Nouran
 Version     :
 Copyright   : quiz functions
 Description : Write a c programming to swap two arrays with different lenght
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],b[10],c[10],i;
	// Asking user to enter first array
	printf ("\n Enter first array :");
	fflush (stdout);
	for (i=0 ;i<10;i++)
	{
		scanf ("%d",&a[i]);
		fflush (stdin);
	}
	//Asking user to enter second array
	printf ("\n Enter second array :");
	fflush (stdout);
	for (i=0 ;i<5;i++)
	{
		scanf ("%d",&b[i]);
		fflush (stdin);
	}
	//printing first array before swapping
	printf ("\n first array before swapping:\t");
	fflush (stdout);
	for (i=0 ;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	//printing second array before swapping
	printf (" \nsecond array before swapping:\t");
	fflush (stdout);
	for (i=0 ;i<5;i++)
	{
		printf("\t%d",b[i]);
	}
	//swapping two arrays using  another empty array
	for (i=0;i<10;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];

	}
	printf("\n Arrays after swapping");
	fflush (stdout);
	printf("\n first array after swapping");
	fflush (stdout);
	for (i=0 ;i<5;i++)
		{
			printf("\t%d",a[i]);
			fflush (stdout);
		}
	printf("\n second array after swapping\n ");
		fflush (stdout);
		for (i=0 ;i<10;i++)
			{
				printf("\t%d",b[i]);
				fflush (stdout);
			}
}
