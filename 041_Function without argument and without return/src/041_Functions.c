/*
 ============================================================================
 Name        : 041_Functions.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void)
{
	setbuf(stdout,NULL);
	sum();

	printf("Try one more....\n");
	sum();
	return EXIT_SUCCESS;
}
void sum()
{
	int a,b,sum;
	printf("Enter 2 numbers to add: \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("The sum is: %d \n",sum);

}
