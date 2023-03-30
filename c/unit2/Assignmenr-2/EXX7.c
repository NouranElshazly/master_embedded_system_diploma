/*
 ============================================================================
 Name        :EX7 assignment 2
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to FIND FACTORIAL OF NUMBER
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n ,count ;
    unsigned long long int factorial =1;
    printf("ENTER AN INTEGER  :");
    scanf ("%d",&n);
    if (n<0)
        printf ("Error !");
    else
    {
     for (count=1;count<=n;count++)
     {
         factorial*=count;
     }

     printf("factorial =% lu",factorial );
    }
    return 0;
}


