/*
 ============================================================================
 Name        : midterm_exam_Q5.c
 Author      : NouranElshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q5
 Description :  function to count number of ones in binary number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count(int n);
int main(void) {
	int n;
printf("Enter your number :");
fflush(stdout);fflush(stdin);
scanf("%d",&n);
printf("%d",count(n));
}
int count(int n)
{
	int count=0;
	int i;
	for (i=0;i<32;i++)
	{
		if (n&(1<<i))
			count++;
	}
	return count;
}
