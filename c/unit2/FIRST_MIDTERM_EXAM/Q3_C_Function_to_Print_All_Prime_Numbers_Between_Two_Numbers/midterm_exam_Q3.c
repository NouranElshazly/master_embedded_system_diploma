/*
 ============================================================================
 Name        : midterm_Q3.c
 Author      : NouranElshazly
 created on  :23/7/2023
 Copyright   : MIDTERM EXAM Q3
 Description : C_Function_to_Print_All_Prime_Numbers_Between_Two_Numbers
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int prime_check (int n );
int main(void) {
int num1,num2,i,flag;
printf("Enter two numbers (intervals):");
fflush (stdout);
	fflush(stdin);
scanf("%d%d",&num1,&num2);
printf("prime number between %d %d are:",num1,num2);
fflush (stdout);
	fflush(stdin);
for (i=num1+1;i<num2;i++){
	flag =prime_check (i);
	if (flag==0)

		printf ("\t%d",i);
	fflush (stdout);
		fflush(stdin);


}


}
int prime_check (int n ){
	int j ,flag=0;
	for (j=2;j<n/2;++j){
		if (n%j==0){
			flag =1;
			break;
	}



}	return flag;
}
