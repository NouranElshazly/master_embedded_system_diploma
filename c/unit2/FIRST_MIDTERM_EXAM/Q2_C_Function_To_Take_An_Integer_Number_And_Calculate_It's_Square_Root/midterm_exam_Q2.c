/*
 ============================================================================
 Name        : midterm-exam-Q2.c
 Author      : NouranElshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q2
 Description : c function to take an integer number and calculate it's square root
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
int num;
float root ;
printf("enter a number :");
fflush (stdout);
fflush(stdin);
scanf("%d",&num);
root =sqrt(num);
printf("the root of%d is %0.3f",num,root);
}
