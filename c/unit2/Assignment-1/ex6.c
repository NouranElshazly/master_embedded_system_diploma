/*
 ============================================================================
 Name        : ex6.c
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

float a,b,temp;
printf("Enter value of a:");
scanf("%f" ,&a);
printf("Enter value of b:");
scanf("%f",&b);
temp =b;
b=a;
a=temp;
printf (" After swapping a=%0.2f \n",a);
printf (" After swapping b=%0.2f \n",b);




    return 0;
}
