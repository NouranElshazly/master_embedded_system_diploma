/*
 ============================================================================
 Name        :ex1 assignment 3
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to find the average of maximum of n positive numbers entered by user
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num,sum,average;
   int n,i ;
   printf("Maximum no.of inputs\n");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
       printf("Enter n%d :",i);
       scanf("%f",&num);
       if (num<0.0)
        break;
       sum=sum+num;
   }
   average=sum/(i-1);
   printf("Average=%.2f",average);


    return 0;
}
