/*
 ============================================================================
 Name        : quiz-code-1.c
 Author      : Nouran
 Version     :
 Copyright   : quiz functions codes
 Description : Write a C program takes string from the user and check if it the same USERNAME or not.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char arr1[100],arr2[100];
	int result ;
	/*asking first user to enter  name */
	printf("Enter your name:");
	fflush (stdout);
	/*taking string from user */
	gets(arr1);
	/*asking second user to enter name */
	printf("Enter your name :");
	fflush (stdout);
	/*taking string from user */
	gets (arr2);
	/*comparing two strings */
	result = stricmp(arr1,arr2);
	if (result==0)

		printf("Identical ");

	else

		printf("Different");
	return 0;



}








