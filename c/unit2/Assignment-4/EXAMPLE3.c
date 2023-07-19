/*
 ============================================================================
 Name        : EXAMPLE3.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	void reverse (); //prototype
	printf ("Enter a sentense ");
	fflush (stdout);
	fflush(stdin);
	reverse();

}
/* function difination */
void reverse (){
	char c ;

	scanf ("%c",&c);
	if (c !='\n') /*stop recursion if getting null */
	{
		reverse(); // calling function again
		printf("%c",c);
		fflush (stdout);
		fflush(stdin);
	}
}
