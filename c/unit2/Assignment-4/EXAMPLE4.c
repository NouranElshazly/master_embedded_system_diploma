/*
 ============================================================================
 Name        : EXAMPLE4.c
 Author      : Nouran
 Version     :
 Copyright   : FUNCTIONS HOMWORK
 Description : FINDING THE POWER OF NUMBER
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power (int base,int exp );

int main(void) {
	int base ,exp ;

	printf("Enter the base :");
	fflush (stdout);
	fflush(stdin);
	scanf ("%d",&base);
	printf("Enter the power (positive integer ):");
	fflush (stdout);
	fflush(stdin);
	scanf ("%d",&exp );
	printf("%d^%d =%d",base,exp, power(base,exp));
	fflush (stdout);
	fflush(stdin);

}
/*FUNCTION DIFINITION */
int power (int base,int exp ){
	if (exp !=0){
		return (base *power(base,exp-1));
	}
	else
		return 1;
}
