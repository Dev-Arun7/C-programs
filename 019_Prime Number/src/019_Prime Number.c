/*
 ============================================================================
 Name        : 019_Prime.c
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
	int n,i,flag=0;
	setbuf(stdout,NULL);
	printf("Number \n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
		if(flag==0)
		{
			printf("Prime");
		}
		else
		{
			printf("Not a prime...!");
		}

	return EXIT_SUCCESS;
}
