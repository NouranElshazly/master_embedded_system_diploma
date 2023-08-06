/*
 ============================================================================
 Name        : ASSIGNMENT_5_Q2
 Author      : NouranElshazly
 Version     :
 Copyright   : 
 Description : C_PROGRAM_TO_ADD_TWO_DISTANCE_(INCH -FEET)_SYSTEM_USING_STRUCTURES
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sdistance  {
	int feet ;
	float inch ;
}d1,d2,sum;
int main(void) {
	printf("Enter information of 1st distance :\n");
	fflush (stdout);
	printf ("feet:");
	fflush (stdout);
	scanf ("%d",&d1.feet);
	printf("inch:");
	fflush (stdout );
	scanf ("%f",&d1.inch );
	printf("Enter information of 2nd distance :\n");
		fflush (stdout);
		printf ("feet:");
		fflush (stdout);
		scanf ("%d",&d2.feet);
		printf("inch:");
		fflush (stdout );
		scanf ("%f",&d2.inch );
		sum.feet =d1.feet +d2.feet;
		sum.inch =d1.inch +d2.inch;
		if (sum.inch >12.0)
		{
			sum.inch =sum.inch -12.0;
			sum.feet ++;

		}
		printf("sum of  distance :%d ,%0.1f",sum.feet ,sum.inch );
		fflush (stdout );




}
