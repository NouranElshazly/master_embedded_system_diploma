/*
 ============================================================================
 Name        : Assignment_6_Q1.c
 Author      : NouranElshazly
 Created     : 14\8\2023
 Copyright   :pointer assignment 
 Description : A program in C to print a string in reverse using a pointer

 ============================================================================
 */
#include <stdio.h>
int main()
{
	char string[100];
	char revstring[100];
	char*Pstring =string;
	char*Prevstring=revstring;
	int k=-1;
	printf("Input a string:");
	fflush(stdout);
	scanf("%s",string);
	while (*Pstring)
	{
		Pstring++;
		k++;
	}
	while (k>=0)
	{
		Pstring--;
		*Prevstring=*Pstring;
		Prevstring++;
		k--;
	}
	*Prevstring='\0';
printf("Reverse of the string is %s \n",revstring);
fflush(stdout);
return 0;

} 