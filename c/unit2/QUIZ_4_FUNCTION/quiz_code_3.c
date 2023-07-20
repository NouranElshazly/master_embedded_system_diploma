/*
 ============================================================================
 Name        : quiz_code_3.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : write c programming to reverse an input array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse (int size,int a[],int b[]);
int main(void) {
	int a[100],b[100],i,size;
	//asking user to enter the size of entered array
	printf ("Enter the size of an input array :");
	fflush (stdout );
	scanf("%d",&size);
	//entered elements of arrays
	for (i=0;i<size;i++)
	{
		printf("Enter Element %d:",i+1);
		fflush (stdout);
		scanf ("%d", &a[i]);


	}
	reverse (size ,a,b);
}
//revese function
void reverse (int size,int a[],int b[])
{
	int i,j;
	for (i=size-1 ,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];}
	printf("the reverse of array is :");
	fflush(stdout);
	for (i=0;i<size;i++)
	{
		printf("\t%d",b[i]);
		fflush (stdout);

	}
}
