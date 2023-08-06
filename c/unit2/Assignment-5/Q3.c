/*
 ============================================================================
 Name            : Q3.c
 Author          : NouranElshazly
Created         :8/6/2023
 Copyright    : ASSIGNMENT_5_Q3
 Description : C_PROGRAM_TO_ADD_TWO_COMPLEX_NUMBER_BY_PASSING_STRUCTURE_TO_A_FUNCTION
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Scomplex
{
	float real ;
	float imag ;
};
struct Scomplex  add_complex (struct Scomplex n1,struct Scomplex n2);
void print_complex (char name[],struct Scomplex c );
int main(void) {
	 struct Scomplex n1 ,n2 , z ;
	printf("Fotr 1st complex number\n ");
	fflush (stdout );
	printf("Enter real and imaginary respectively :\n");
	fflush (stdout);
	scanf ("%f%f",&n1.real,&n1.imag);
	printf("For 2nd complex number\n ");
	fflush (stdout );
	printf("Enter real and imaginary respectively :\n");
	fflush (stdout);
	scanf ("%f%f",&n2.real,&n2.imag);


	z=add_complex (n1,n2);
print_complex ("z",z);
	fflush (stdout);
	return 0;

}
struct Scomplex add_complex (struct Scomplex n1,struct Scomplex n2)
{
struct Scomplex temp ;
temp.real =n1.real +n2.real ;
temp.imag =n1.imag +n2.imag ;
return temp ;
}
void print_complex (char name[],struct Scomplex temp  )
{
	printf("%s =(%lf)+i (%lf)\r\n ",name, temp.real, temp.imag );
	fflush (stdout);
}
