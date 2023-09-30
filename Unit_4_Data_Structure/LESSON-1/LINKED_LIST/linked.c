/*
 * linked.c
 *
 *  Created on: Sep 26, 2023
 *      Author: User
 */

#include "linked.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "conio.h"
struct Sstudent * gpFirstStudent =NULL  ;
void ADD_STUDENT() {
	// if list is empty

	struct Sstudent *PLastStudent ;
	struct Sstudent *PNewStudent ;

	if (gpFirstStudent ==NULL ) //false
	{
		//creat new record
		PNewStudent = (struct Sstudent*)malloc( sizeof(struct Sstudent )) ;//dynamic allocation

		gpFirstStudent =PNewStudent;
	} else {
		//if list contains record
		PLastStudent=gpFirstStudent;
		while (PLastStudent->PNextstudent)
			PLastStudent =PLastStudent->PNextstudent;
		if(PNewStudent = (struct Sstudent *)malloc( sizeof(struct Sstudent )) )//dynamic allocation
			// CHECK if memory allocation is succeded
		{

			PLastStudent ->PNextstudent=PNewStudent;
		}

	}
	char temp_text[40];

	// fill new record
	DPRINTF("Enter ID:\n");

	gets(temp_text);
	PNewStudent->student.ID =atoi(temp_text);
	DPRINTF("Enter Name:\n");
	gets(PNewStudent -> student.Name );
	DPRINTF("Enter height:\n");
	gets(temp_text);
	PNewStudent -> student.height =atof(temp_text);
	//set the next recorde to null
	PNewStudent->PNextstudent=NULL;

}

int Delete_Stuedent ()
{
	char temp_text[40];
	unsigned int selected_id;
	//ask user to enter the selected data
	DPRINTF ("enter the Id fo the student to delete it \n ");
	gets(temp_text);
	selected_id = atoi(temp_text);
	if (gpFirstStudent) //list have no record
	{
		struct Sstudent *PpreviousStudent =NULL;
		struct Sstudent *PSelectedStudent =gpFirstStudent;
		//looping starting from gpFirstStudent
		while(PSelectedStudent)
		{
			//compare rhe record id with the selected id
			if(PSelectedStudent->student.ID ==selected_id)
			{
				if(PpreviousStudent) //the 1st student is not selected
				{
					PpreviousStudent->PNextstudent =PSelectedStudent->PNextstudent;
				}
				else{
					gpFirstStudent =PSelectedStudent->PNextstudent;
				}
				free (PSelectedStudent); //delet selected data
				return 1;
			}
			//store previose record pointer
			PpreviousStudent=PSelectedStudent;
			PSelectedStudent=PSelectedStudent->PNextstudent;
		}


	}
	DPRINTF("\n cannot find student ID.");
	return 0;

}
void view_student ()
{
	struct Sstudent* PcurrentStudent =gpFirstStudent;

	int count=0 ;
	if (gpFirstStudent==NULL)
	{
		DPRINTF("the list is empty \n");

	}
	else {
		while(PcurrentStudent)
		{
			DPRINTF("\n record number %d",count+1);
			DPRINTF("\n \t STUDENT ID IS : %d",PcurrentStudent->student.ID);
			DPRINTF("\n \t STUDENT NAME IS: %s",PcurrentStudent->student.Name);
			DPRINTF("\n \t STUDENT HIEGHT IS %0.1f",PcurrentStudent->student.height);
			PcurrentStudent =PcurrentStudent->PNextstudent;
			count++;

		}
	}
}
void DELET_ALL ()
{
	struct Sstudent* Pcurrentstudent =gpFirstStudent;
	if (gpFirstStudent==NULL)
	{
		DPRINTF("the list is empty \n");

	}
	//delete all record items
	while(Pcurrentstudent)
	{
		struct Sstudent *Tempstudent =Pcurrentstudent;
		Pcurrentstudent =Pcurrentstudent->PNextstudent;
		free(Tempstudent);
	}
	gpFirstStudent =NULL;
}

void count ()
{

	struct Sstudent* Pcurrentstudent =gpFirstStudent;
	int count=0;
	if (gpFirstStudent==NULL)
	{
		DPRINTF("the list is empty \n");

	}
	//delete all record items
	while(Pcurrentstudent)
	{
		Pcurrentstudent =Pcurrentstudent->PNextstudent;
		count++ ;
	}
	DPRINTF("\n number of nodes %d",count);
}
int Get_Nth (int index)
{
	int count=0 ;
	struct Sstudent* Pcurrentstudent =gpFirstStudent;
	if (gpFirstStudent==NULL)
	{
		DPRINTF("the list is empty \n");
	}
	else
	{

		while (Pcurrentstudent){
			if (count+1 ==index )
			{
				DPRINTF("\n record number %d",index);
				DPRINTF("\n \t STUDENT ID IS : %d",Pcurrentstudent->student.ID);
				DPRINTF("\n \t STUDENT NAME IS: %s",Pcurrentstudent->student.Name);
				DPRINTF("\n \t STUDENT HIEGHT IS %0.1f",Pcurrentstudent->student.height);
				return 1;
			}
			else
			{
				count++;
				Pcurrentstudent =Pcurrentstudent->PNextstudent;

			}
		}

	}



}
int node_from_the_end ()
{
	struct Sstudent* Pcurrentstudent =gpFirstStudent;
	struct Sstudent* PReferencestudent =gpFirstStudent;
	int count =0;
	int counter=0;
	int search ;
	char index[40];
	DPRINTF("\n Enter index:");
	gets(index);
	search =atoi(index);
	while(count!=search)
	{
		count++;
		PReferencestudent=PReferencestudent->PNextstudent;
	}
	while (PReferencestudent)
	{
		if (counter==search)
		{
			DPRINTF("\n record number %d ",counter);
			DPRINTF("\n \t ID: %d ",Pcurrentstudent->student.ID);
			DPRINTF("\n \t Name %s ",Pcurrentstudent->student.Name);
			DPRINTF("\n \t height: %0.1f ",Pcurrentstudent->student.height);
			return 1;
		}
		else
		{
			counter++;
			PReferencestudent=Pcurrentstudent->PNextstudent;
			PReferencestudent=PReferencestudent->PNextstudent;

		}

	}
}

void mid()
{
	struct Sstudent* pFastStudent =gpFirstStudent;
	struct Sstudent* pSlowStudent =gpFirstStudent;

	int count=0;
	while(pFastStudent)
	{
		count++;
		pFastStudent =pFastStudent ->PNextstudent;
		pFastStudent =pFastStudent ->PNextstudent;
		pSlowStudent =pSlowStudent ->PNextstudent;
	}
	DPRINTF("\n record number %d ",count);
	DPRINTF("\n \t ID: %d ",pSlowStudent->student.ID);
	DPRINTF("\n \t Name %s ",pSlowStudent->student.Name);
	DPRINTF("\n \t height: %0.1f ",pSlowStudent->student.height);


}
void Reverse()
{
	struct Sstudent* Pcurrentstudent =gpFirstStudent ;
	struct Sstudent* pPreviousStudent =NULL ;
	struct Sstudent* PNextstudent =NULL ;

	while (Pcurrentstudent) {
		// Store next
		PNextstudent = Pcurrentstudent->PNextstudent;

		// Reverse current node
		Pcurrentstudent->PNextstudent = pPreviousStudent;

		// Move pointers one position ahead.
		pPreviousStudent = Pcurrentstudent;
		Pcurrentstudent = PNextstudent;
	}
	gpFirstStudent= pPreviousStudent;
}
