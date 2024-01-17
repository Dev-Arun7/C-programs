/*
 ============================================================================
 Name        : 001_Sum.c
 Author      : Arun
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2, sum;
	setbuf(stdout, NULL);
	printf("Enter 2 numbers \n "); /* prints Hi */
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Sum is %d",sum);
	return EXIT_SUCCESS;
}
