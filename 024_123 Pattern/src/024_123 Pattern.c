/*
 ============================================================================
 Name        : 024_123.c
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
	int lim,i,j;
	setbuf(stdout,NULL);
	printf("Enter the limit ");
	scanf("%d",&lim);
	for(i=1;i<=lim;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			usleep(30000);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
