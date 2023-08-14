
/*
 ============================================================================
 Name        : Assignment_6_Q1.c
 Author      : NouranElshazly
 Created     : 14\8\2023
 Copyright   :pointer assignment 
 Description :  A program in C to print the elements of an array in reverse 
order.
 ============================================================================
 */#include <stdio.h>
int main ()
{
	int array[15];
	int *ptr ;
	int size ;
	int i;
printf ("Input the number of elements to store in the array (max 15) : ");
fflush (stdout);
scanf("%d",&size);
ptr =&array[0];
printf("Input %d number of elements in the array :\n",size);
fflush (stdout);
for (i=0;i<size;i++)
{
	printf("element -%d\n",i+1);
	fflush (stdout);
	scanf("%d",ptr);
	ptr++;

}
ptr=&array[size-1];
for (i=size;i>0;i--)
{
	printf("element %d=%d\n",i,*ptr);
	fflush (stdout);
	ptr--;
}
return 0;
}