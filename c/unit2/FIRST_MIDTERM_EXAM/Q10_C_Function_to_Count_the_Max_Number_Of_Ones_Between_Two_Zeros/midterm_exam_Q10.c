/*
 ============================================================================
 Name        : midterm_exam_Q10.c
 Author      : NouranElshazly
 created     :23/7/2023
 Copyright   : MIDTERM EXAM Q10
 Description : C_Function_to_Count_the_Max_Number_Of_Ones_Between_Two_Zeros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int max_ones (int num);
int main(void) {
	int num;
	printf("Enter a number:");
	fflush (stdout);
	scanf("%d",&num);
	printf("Max ones is :%d",max_ones(num));
	fflush (stdout);
}
int max_ones (int num)
{
	int count =0;
	while (num!=0)
	{
		num=(num&(num<<1));
		count++;

	}
	return count;
}
