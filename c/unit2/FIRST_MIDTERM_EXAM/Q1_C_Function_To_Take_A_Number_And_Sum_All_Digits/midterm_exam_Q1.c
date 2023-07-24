/*
 ============================================================================
 Name        : mid_term_exam_Q1.c
 Author      : Nouran Elshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q1
 Description : c function to take a number and sum all digits
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//main function
int main(void) {
	int rem,sum=0,num;
	printf("Enter a number :");
	fflush (stdout);
	fflush (stdin);
	scanf ("%d",&num);
	while (num !=0)
	{
		rem= num % 10;
		sum=sum+rem;
		num = num/10;
	}
	printf("sum=%d",sum);

	return 0;
}
