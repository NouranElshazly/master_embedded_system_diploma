/*
 ============================================================================
 Name        : EXX3.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : ASSIGNMENT 3 STRINGS_HW
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[1000];
	int j ,i;
	char temp ;
	printf("Enter the string");
	fflush(stdin);
		fflush(stdout);
		gets(string);
		i=0;
		j=strlen(string)-1;
		while (i<j)
		{
			temp =string[i];
			string[i]=string[j];
			string[j]=temp;
			i++;
			j--;
		}
		printf("Reverse string is :%s",string);

}
