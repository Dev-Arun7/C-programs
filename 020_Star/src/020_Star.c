/*
 ============================================================================
 Name        : 020_Star.c
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
	int num,i,j;
	setbuf(stdout,NULL);
	printf("Enter limit  ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
			usleep(30000);
		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}
