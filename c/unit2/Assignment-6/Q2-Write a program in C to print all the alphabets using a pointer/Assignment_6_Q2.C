/*
 ============================================================================
 Name        : Assignment_6_Q1.c
 Author      : NouranElshazly
 Created     : 14\8\2023
 Copyright   :pointer assignment 
 Description : A program in C to print all the alphabets using a pointer.
 ============================================================================
 */

#include <stdio.h>
int main()
{
	char alpha[27];
	int i ;
	char*ptr;
	ptr =alpha;
    for (i=0;i<26;i++)
    {
     *ptr =i+'A';
      ptr++;
    }
    ptr =alpha;
printf ("the Alphabets are \n");
fflush (stdout);
    for (i=0;i<26;i++)
    {
     printf("%c \t",*ptr);
     fflush (stdout);
     ptr++;
    
    }

return 0;
}
