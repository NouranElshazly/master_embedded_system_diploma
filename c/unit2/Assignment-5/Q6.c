/*
 ============================================================================
 Name        : Q6.c
 Author      : NouranElshazly
 Version     :
 Copyright   : ASSIGNMENT_5_Q6
 Description : THE DEFFERENCE BETWEEN SIZE OF UNION AND STRUCTURE
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
union jop {
	char name [32];
	float salary ;
	int worker_no;
}u;
struct jop1 {
	char name[32];
	float salary;
	int worker_no;
}s;
int main(void) {
	printf("size of unio=%d",sizeof (u));
	fflush (stdout);
	printf("size of struct %d",sizeof(s));
	fflush (stdout);
}
