

/*
 ============================================================================
 Name        :EX3 assignment 3 Arrays_HW
 Author      : NOURAN
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[100][100],t[100][100],row=0,colum=0,i,j;

	printf ("Enter ROWES: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&row);

	printf ("Enter colums : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&colum);

	printf(" Enter elements of matrix:\n");
	for (i=0;i<row;++i)
	{
		for (j=0;j<colum;++j)
		{
			printf("Element a%d%d : ",(i+1),(j+1) );
			fflush(stdin);
			fflush(stdout);

			scanf("%d" ,&a[i][j]);

		}
	}
	/*printing the entered matrix*/
	printf("\n Entered matrix:\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<colum;j++)
		{
			printf("%d ",a[i][j]);
			if (j==colum-1)

				printf("\n \n");
		}
	}
	/*FINDING TRANSPOSE OF MATRIX*/
	for (i=0;i<row;i++)
	{
		for (j=0;j<colum;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	/*PRINTING THE TRANSPOSE MATRIX*/

	printf("\n Transpose of  Entered matrix:\n");
	for (i=0;i<colum;i++)
	{
		for (j=0;j<row;j++)
		{

			printf("%d  ",t[i][j]);
			if (j==row-1)

				printf("\n \n");
		}
	}
	return 0;
}
