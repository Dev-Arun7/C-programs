/*
 ============================================================================
 Name        : 007_Sum_1.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	float b,sum;
	setbuf(stdout, NULL);
	printf("enter the numbers\n");
	scanf("%d%f",&a,&b);
	sum=a+b;
	printf("The sum is %f",sum);
	return EXIT_SUCCESS;
}
