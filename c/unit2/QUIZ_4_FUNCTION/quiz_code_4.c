/*
 ============================================================================
 Name        : quiz_code4.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : write a c program to print the last accurance of a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int last_occurance (int a[],int size);
int main(void) {
	int a[100],i,size;
	printf("enter your array's size:");
	fflush (stdout);
	scanf("%d",&size);
	for (i=0;i<size;i++){
		printf("enter element %d:",i+1);
		fflush (stdout);
		scanf("%d",&a[i]);
	}
	int the_last_occurance = last_occurance (a,size );
	printf("last occurance is %d",the_last_occurance);
	fflush (stdout);
}
int last_occurance (int a[],int size)
{
	int i;
	int numbercheck;
	printf ("enter your number wanted to check :");
	fflush (stdout);
	scanf ("%d",&numbercheck);

	for (i=size;i>=0;i--)
	{
		if (a[i]==numbercheck )
			return i+1;
	}
	return -1;
}
