/*
 ============================================================================
 Name        : EX1.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description :ASSIGNMENT 3 STRINGS_HW
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c[1000];
	char ch;
	int i,count=0;
	printf("Enter a string");
	fflush(stdin);
	fflush(stdout);
	gets(c);
	printf("Enter a character to find frequancy:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	for (i=0;c[i]!='\0';++i)
	{
		if (ch==c[i])
			count++;

	}
	printf("frequency of %C=%d",ch,count);
}
