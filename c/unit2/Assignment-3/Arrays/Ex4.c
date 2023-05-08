/*
 ============================================================================
 Name        : Ex4.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : assignment 3 arrays hw
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a [100];
	int element ,location ,i ,num;
	/*assign elements value*/
	printf(" Enter number of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	for(i=0; i<num; i++ )
	{

		scanf("%d",&a[i]);

	}
	/* assign the inserted value*/
	printf("Enter your Element to be inserted :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&element);
	/*assign inserted element location*/
	printf("Enter the location");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&location );
	/*inserting process*/
	for (i=num ;i>=location ;i--)
	{

		a[i]=a[i-1];
	}
	num++;
	a[location-1]=element;
	/*printing new array*/
	for(i=0;i<num;i++)
		printf("%d",a[i]);




}
