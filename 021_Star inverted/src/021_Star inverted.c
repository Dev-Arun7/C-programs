/*
 ============================================================================
 Name        : 021_Star.c
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
	printf("Enter limit ");
	scanf("%d",&num);
	for(i=num;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("* ");
		}
		printf("\n");
		usleep(100000);
	}
	return EXIT_SUCCESS;
}
