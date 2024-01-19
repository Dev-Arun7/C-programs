/*
 ============================================================================
 Name        : 018_Even.c
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
	int i,limit;
	setbuf(stdout,NULL);
	printf("Number? \n");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
			usleep(50000);
		}

	}
	return EXIT_SUCCESS;
}
