/*
 ============================================================================
 Name        : 026_Star.c
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
	for(i=1;i<=num;i++)
	{
		for(j=k;j>0;j--)
		{
			printf(" ");
		}
		for(j=1;j<i*2;j++)
		{
			printf("*");
			usleep(200000);
		}
		printf("\n");
		k=--k;

	}
	return EXIT_SUCCESS;
}
