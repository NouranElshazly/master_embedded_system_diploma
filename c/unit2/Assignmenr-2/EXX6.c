/*
 ============================================================================
 Name        :EX6 assignment 2
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to calculate sum of natural number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int n ,count,sum=0 ;
     printf("Enter an integer :");
     scanf("%d",&n);
     for (count =1 ; count<=n;count++)
     {
         sum+=count;

     }
     printf("sum=%d",sum);
}
