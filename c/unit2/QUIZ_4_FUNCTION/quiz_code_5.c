/*
 ============================================================================
 Name        : quiz_code_5.c
 Author      : Nouran
 Version     :
 Copyright   : Your copyright notice
 Description : Write a function that clears bit in a given number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int clear_bit (int n,int bit);
int main(void) {
	int bit,n;
printf("input number :");
fflush (stdout);
scanf("%d",&n);
printf("Bit position:");
fflush (stdout);
scanf("%d",&bit);
printf("Result=%d",clear_bit(n,bit));

}
int clear_bit (int n ,int bit )
{
return	n&=~(1<<bit);
}
