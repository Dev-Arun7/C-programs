/*
 ============================================================================
 Name        : 042_Function.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
int main(void)
{
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter the values for addition \n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return EXIT_SUCCESS;
}


/*Function part*/
sum(int c,int d)
{
	int sum;
	sum=c+d;
	printf("Sum is %d",sum);

}

