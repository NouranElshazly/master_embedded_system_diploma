/*
 ============================================================================
 Name        : EXAMPLE2.c
 Author      : Nouran
 Version     :
 Copyright   :  FUNCTION HOMEWORK
 Description :FIND THE FACTORIAL OF AN POSITIVE INTEGER NUMBER
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact (int n );/*PPROTOTYPE OF FUNCTION */
int main(void) {
	int z ;
	printf("Enter an positive integer :");
	fflush (stdout);
	fflush(stdin);
	scanf ("%d",&z);
	printf("factonrial of %d is %d",z,fact(z));
	fflush (stdout);
	fflush(stdin);
	return 0;
}
/* FUNCTION TO FIND A FACTORIAL OF AN INTEGER NUMBERS  */
int fact (int n)
{
	if (n !=1)

		return n*fact(n-1);
		
}
