/*
 ============================================================================
 Name        :EX5 assignment 2
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to check whether a char is alphbet
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c ;
    printf("Enter a character :",c);
    scanf("%c",&c);
    if (c>='a'&&c<='z'||c>='A'&&c<='Z')
        printf("%c IS AN ALPHABET",c);
    else
        printf("%c is not an alphabet",c);

}
