/*
 ============================================================================
 Name        : 037_Multi.c
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
	int a[3][3],i,j;
	setbuf(stdout,NULL);
	printf("Enter the values to the array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}



	printf("Entered Array is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
