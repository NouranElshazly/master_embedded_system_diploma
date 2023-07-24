
/*
 ============================================================================
 Name        : midterm_exam_Q9
 Author      : NouranElshazly
 Created     :23/7/2023
 Copyright   : MIDTERM EXAM Q9
 Description : C_Function_to_Reverse_Words_in_String
 ============================================================================
 */
// C program to reverse a string
#include <stdio.h>


// starting with pointer begin and
// ending with pointer end
void reverse(char* begin,char* end)
{
	char temp;
	while (begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

// Function to reverse words
void reverseWords(char* s)
{
	char* word_begin = s;
	char* temp = s;
	while (*temp)
	{
		temp++;
		if (*temp =='\0')
		{
			reverse(word_begin,temp - 1);
		}
		else if (*temp == ' ')
		{
			reverse(word_begin,temp - 1);
			word_begin = temp + 1;
		}
	}

	reverse(s, temp - 1);
}

int main()
{
	char s[] ="mohamed gamal";
	printf("string before is: %s",s);
	char* temp = s;
	reverseWords(s);
	printf("\nstring after is :%s", s);
	return 0;
}

