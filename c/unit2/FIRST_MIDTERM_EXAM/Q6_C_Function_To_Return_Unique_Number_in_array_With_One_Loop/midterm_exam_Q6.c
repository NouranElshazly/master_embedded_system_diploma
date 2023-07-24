/*
 ============================================================================
 Name        : midterm_exam_Q6.c
 Author      : NouranElshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q6
 Description : c function to return unique number in array with one loop
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int unique_number (int a[],int size );
int main(void) {
	int i ,size ,a[100];
	printf("Enter the size of array :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&size);
	printf ("Enter element of array :");
	fflush(stdout);
	fflush(stdin);
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf ("the unique number in array is %d",unique_number(a,size));
	fflush(stdout);
	fflush(stdin);

}
int unique_number (int a[],int size )
{
	int t=0,j;
	for (j=0;j<size;j++)
		t ^=a[j];
	return t;
}
