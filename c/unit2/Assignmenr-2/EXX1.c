/*
 ============================================================================
 Name        :EX1 assignment 2
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to check whether a number is odd or even
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int num ;
printf("Enter an integer you want yo check:");
scanf("%d",&num);
if (num%2==0)
{
    printf ("%d is even ",num);

}
else
{
  printf ("%d is odd ",num);
}

}
