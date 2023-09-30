/*
 * linked.h
 *
 *  Created on: Sep 26, 2023
 *      Author: Nouran Elshazly
 *
 */


#ifndef  LINKED_H_
#define LINKED_H_
#define DPRINTF(...)    {fflush(stdout);\
		                  fflush(stdin);\
		                printf(__VA_ARGS__);\
		                   fflush(stdout);\
		                       fflush(stdin);}
//effective data
struct Sstudent_data {
	int ID ;
	char Name[40] ;
	float height ;

};
//linked list node
struct Sstudent {
	struct Sstudent_data student ;
	struct Sstudent *PNextstudent ;
};


// APIS
void ADD_STUDENT();
int Delete_Stuedent ();
void view_student ();
void DELET_ALL ();
int Get_Nth ();
void count ();
void mid();
int node_from_the_end ();
void Reverse();
#endif
