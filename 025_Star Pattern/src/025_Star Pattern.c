/*
 ============================================================================
 Name        : 025_Star.c
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
	int num,i,j,k;
	setbuf(stdout,NULL);
	printf("Enter limit  ");
	scanf("%d",&num);
	k=num;
	for(i=0;i<=num;i++)
	{
		for(j=k;j>0;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
			usleep(20000);
		}
		printf("\n");
		k=--k;

	}
	return EXIT_SUCCESS;
}
