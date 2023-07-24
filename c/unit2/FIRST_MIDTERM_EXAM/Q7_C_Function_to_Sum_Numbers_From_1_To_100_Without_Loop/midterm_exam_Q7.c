/*
 ============================================================================
 Name        : midterm_exam_Q7.c
 Author      : NouranElshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q7
 Description : c function to sum numbers from 1 to 100(without loop)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum_no_loop(int n);
int main(void) {
	int s=sum_no_loop(100);
	printf("sum=%d",s);
}
int sum_no_loop(int n)
{
static int sum=0;
	if (n>0)
	{

		sum_no_loop(n-1);
		sum=sum+n;
	}
	return sum;

}
