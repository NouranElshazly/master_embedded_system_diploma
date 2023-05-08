/*
 ============================================================================
 Name        : EX2.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c[1000];
		int lenghth =0;
		int i;
		printf("Enter a string");
		fflush(stdin);
		fflush(stdout);
		gets(c);
		for (i=0; c[i]!='\0';i++)
		{
			lenghth ++;
		}
		printf("Lenghth of string =%d",lenghth );
}
