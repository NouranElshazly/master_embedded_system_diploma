/*
 ============================================================================
 Name        : ex7.c
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description :Write Source Code to Swap Two Numbers without temp variable
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10,y=3;
    x=x+y; // x became 10+3=13
    y=x-y; // y become 13-3=10
    x=x-y; //x become 13-10 =3
    printf("x=%d\n",x);
    printf("y=%d",y);
}
