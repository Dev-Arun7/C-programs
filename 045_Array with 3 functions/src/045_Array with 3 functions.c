/*
 ============================================================================
 Name        : 045_Array.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>


void disp(int);
int get(int);
int main(void)
{
	int n,i,values[100];
	setbuf(stdout,NULL);
	printf("enter array size  ");
	scanf("%d",&n);
	values[i]=get(n);
	disp(n);
	return EXIT_SUCCESS;
}
int get(int lim)
{
	int i,values[100];
	setbuf(stdout,NULL);
	printf("enter values \n ");
	for(i=0;i<lim;i++)
	{
		scanf("%d",&values[i]);
	}
	return(values[i]);
}
disp(int lim)
{
	int i,values[100];
	setbuf(stdout,NULL);
	printf("enter values are: ");
	for(i=0;i<lim;i++)
	{
		printf("%d\t",values[i]);
	}

}
