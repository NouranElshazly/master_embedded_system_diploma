/*
 ============================================================================
 Name            : Q4.c
 Author          : NouranElshazly
Created         :8/6/2023
 Copyright    : ASSIGNMENT_5_Q4
 Description : C_PROGRAM_TO_ADD_TWO_COMPLEX_NUMBER_BY_PASSING_STRUCTURE_TO_A_FUNCTION
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sinformation {
	int roll_number ;
	char name[100] ;
	float marks ;
};
int main(void) {

	struct Sinformation s [10];
	int j ;
	printf ("Enter information of students:\n");
	fflush (stdout);
	for (j=0;j<10;j++)
	{
		 s[j].roll_number =j+1;
		printf("For roll number %d ",s[j].roll_number );
		fflush (stdout);
		printf("Enter name :");
		fflush (stdout );
		scanf ("%s",s[j].name);
		printf("Enter marks :");
		fflush (stdout );
		scanf ("%f",&s[j].marks);
		printf("\n");
		fflush (stdout);


	}
	printf("displaying information for students\n\n");
	fflush (stdout);

	for (j=0 ;j<10;j++)
	{
printf("\n Information for roll number :%d",j+1);
fflush (stdout );
printf("Name :%s",s[j].name);
fflush (stdout);
printf("\n  marks :%f",s[j].marks);
fflush (stdout);
	}

}
