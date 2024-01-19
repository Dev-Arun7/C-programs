/*
 ============================================================================
 Name        : 016_one.c
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
	int i;
	setbuf(stdout,NULL);
	for(i=1;i<100;i++)
	{
		printf("%d\n",i);
		usleep(50000);
	}
	return EXIT_SUCCESS;
}
