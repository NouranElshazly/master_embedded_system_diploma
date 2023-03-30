/*
 ============================================================================
 Name        :EX1 assignment 2
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description : Write c programming to check Vowel or consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c ;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    if (c=='A'||c=='a'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='U'||c=='u')
    {
        printf("%c is vowel .",c);
    }
     else
     {
         printf("%c is a conconat .",c);
     }

}
