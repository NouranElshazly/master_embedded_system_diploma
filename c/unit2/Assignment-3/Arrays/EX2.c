/*
 ============================================================================
 Name        :EX2 assignment 3 Arrays_HW
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
  float a[100],sum=0,average=0;
  int n ,i;
  printf("Enter the numbers of data:");
  scanf("%d",&n);
  while (n>100 || n<0)
  {
      printf("Error!");
      printf("enter the number again:");
      scanf("%d",&n);
  }
  for (i=0;i<n;i++)
  {
      printf("%d-Enter number:",i+1);
      scanf("%f",&a[i]);
      sum+=a[i];
  }
  average =sum/n;
  printf(" Average =%.2f",average);

    return 0;
}
