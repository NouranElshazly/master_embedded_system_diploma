/*
 ============================================================================
 Name        : quiz_code_6.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description :write a c programming to check if the given number is power 3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_power_3 (unsigned n );

int main(void) {
	int n ;
	printf("Enter a number:");
	fflush (stdout);
	scanf("%d",&n);
	 check_power_3 (n)?printf("%d=0",n) :printf("%d=1",n);
}
int check_power_3 (unsigned  n )
{
	double i =log(n)/log(3);
	return i==trunc (i);

}
