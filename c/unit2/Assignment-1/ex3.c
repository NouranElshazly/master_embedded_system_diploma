/*
 ============================================================================
 Name        : ex3.c
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : SUM TWO INTEGERS
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,sum;
	printf("Enter two integers :");
	scanf ("%d %d",&num1,&num2);
	fflush(stdout); fflush(stdin);
	sum=num1+num2;
	printf("sum =%d",sum);

}
