/*
 ============================================================================
 Name        : Assignment_6_Q1.c
 Author      : NouranElshazly
 Created     : 14\8\2023
 Copyright   :pointer assignment 
 Description :  A program in C to demonstrate how to handle the pointers 
in the program.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// NOW WE CREAT AN VARIABLE M AND GREAT AN POINTER  POINTING TO M
int m ;
int *ab ;
m=29;
// PRNTING THE ADDRESS AND VALUE OF M
printf("The address of m is %p \n",&m);
fflush (stdout );
printf("The value of m is %d\n",m);
fflush (stdout);
//point ab to m
ab=&m;
//	printing address an content of ab
printf("Now ab is assigned with the address of m");
fflush (stdout);
printf("The address of ab is %p\n",ab);
fflush (stdout);
printf("The content of ab is %d\n",*ab);
fflush (stdout);
//CHANGING VALUE OF X AND PRINTING THE ADDRESS AND CONTENT OF ab
m=34;
printf("The value of m assigned to 34 now \n");
fflush (stdout);
printf("The address of ab is %p\n",ab);
fflush (stdout);
printf("The content of ab is %d\n",*ab);
fflush (stdout);
//The pointer is assigned to value 7
*ab=7;
printf("The pointer variable ab is assigned with the value 7 now.\n ");
printf("The address of m is %p\n ",&m);
fflush (stdout );
printf("the value of m is %d\n",m);
fflush (stdout);



}
