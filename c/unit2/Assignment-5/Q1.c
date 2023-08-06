/*
 ============================================================================
 Name        : assignment5_q1.c
 Author      : NouranElshazly
 Version     :
 Copyright   : ASSIGNMENT_5_Q1
 Description :C_PROGRAM_TO_STORE_INFORMATION_OF_STUDENT_USING_STRUCTURE
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[100];
	int roll;
	float mark;
};
int main(void) {
struct student s ;
printf("Enter student marks ,rool,name\n");
fflush(stdout);
printf("Enter student name: ");
fflush (stdout);
scanf ("%s",s.name );
printf("Enter student marks :");
fflush (stdout);
scanf ("%f",&s.mark);
printf("Enter student roll number :");
fflush (stdout);
scanf ("%d",&s.roll);
printf("Displaying Information :\n");
fflush(stdout);
printf ("Name :%s\n",s.name );
fflush(stdout);
printf ("Mark :%0.1f\n",s.mark );
fflush(stdout);
printf ("Roll:%d\n",s.roll );








}
