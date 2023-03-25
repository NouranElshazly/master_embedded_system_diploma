 /*
 ============================================================================
 Name        : ex4.c
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : product two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 main()
{
    float num1,num2,product;
    printf("Enter two numbers:\n");
    scanf ("%f%f",&num1,&num2);
    product = (num1*num2);
    printf("product=%f",product);
}
