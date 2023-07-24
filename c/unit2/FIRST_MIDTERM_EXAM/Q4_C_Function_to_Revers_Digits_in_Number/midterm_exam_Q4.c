/*
 ============================================================================
 Name        : midterm_exam_Q4.c
 Author      : NouranElshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q4
 Description : C_Function_to_Revers_Digits_in_Number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,rem=0 ;
	printf ("enter a number :");
	fflush (stdout);
	fflush(stdin);
	scanf("%d",&n);
while (n!=0)
{
	rem = rem*10;
	rem=rem+n%10;
	n=n/10;

}
printf("thr reverse of number is %d",rem);
}
