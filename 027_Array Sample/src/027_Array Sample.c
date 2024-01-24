/*
 ============================================================================
 Name        : 027_Array.c
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
	int a[4],i;
	setbuf(stdout,NULL);
	printf("Enter the values to the array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your values are: \n");
	for(i=0;i<5;i++)
	{
		printf("%d \t",a[i]);
	}
	return EXIT_SUCCESS;
}
