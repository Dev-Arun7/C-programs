/*
 ============================================================================
 Name        : 028_Array.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[100],i,limit; //here entered 100 as a maximum limit of array
	setbuf(stdout,NULL);
	printf("Enter Array limit: \n");
	scanf("%d",&limit);
	printf("Enter the values to the array: \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your values are: \n");
	for(i=0;i<limit;i++)
	{
		printf("%d \t",a[i]);
	}
	return EXIT_SUCCESS;
}
