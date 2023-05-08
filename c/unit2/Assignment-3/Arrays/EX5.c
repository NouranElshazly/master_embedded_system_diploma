/*
 ============================================================================
 Name        : EX5.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description :ASSIGNMENT3 _ARRAYS HW
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num_element,i,element;
	int a [100];
	printf("Enter number of  elements:");
	fflush (stdout);
	fflush(stdin);
	scanf("%d",&num_element);

	for (i=0 ;i<num_element; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements to be searched:");
	fflush(stdin);
		fflush(stdout);
		scanf("%d",&element);
		i=0;
		while (i<num_element&&element!=a[i])
		{
		i++;
		}
		if (i <num_element)
		{
			printf("Number found at location =%d",i+1);
		}
		else
		{
			printf("Number not found");
		}



}
