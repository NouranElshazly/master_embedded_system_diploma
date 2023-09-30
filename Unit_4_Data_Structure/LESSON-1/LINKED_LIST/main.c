/*
 * main.c
 *
 *  Created on: Sep 26, 2023
 *      Author: User
 */
#include "linked.h"
#include "stdlib.h"
#include <stdio.h>
#include "string.h"
#include "conio.h"
void main()
{
	while (1){
		char temp_text[40];
		int num=0;

		DPRINTF("\n=============\n");
		DPRINTF("\n \t choose on of the following options \n");
		DPRINTF("\n 1:Add Student:");
		DPRINTF("\n 2:Delete student:");
		DPRINTF("\n 3:View student :");
		DPRINTF("\n 4:Delete ALL :");
		DPRINTF("\n 5:Find element of index :");
		DPRINTF("\n 6:count number of nodes:");
		DPRINTF("\n 7:calculate the mid:");
		DPRINTF("\n 8:node from the end:");
		DPRINTF("\n 9:Reverse:");
		DPRINTF("\n Enter option number :");
		gets(temp_text);

		switch (atoi(temp_text))
		{
		case 1:
			ADD_STUDENT();
			break ;
		case 2:
			Delete_Stuedent();
			break;
		case 3:
			view_student();
			break;
		case 4:
			DELET_ALL();
			break;
		case 5:
			DPRINTF("\n Enter the index :\n");
			gets (temp_text);
			num =atoi(temp_text);
			Get_Nth(num);
			break ;
		case 6:
			count();
			break;
		case 7:
			mid();
			break;
		case 8:
			node_from_the_end();
			break;
		case 9:
			Reverse();
			break;
		default:
			DPRINTF("\n Wrong option ");
			break;
		}

	}
}
