/*
 ============================================================================
 Name        :EX3 assignment 2
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to find the largest number amoung three numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3;

    printf("Enter three numbers :");

    scanf("%f%f%f",&num1,&num2,&num3);

   if (num1>=num2 && num1>=num3)
    printf ("the largest number is %.2f",num1);
   if (num2>=num1 && num2>=num3)
    printf ("the largest number is %.2f",num2);
    if (num3>=num2 && num3>=num1)
    printf ("the largest number is %.2f",num3);

}

