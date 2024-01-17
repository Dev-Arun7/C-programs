/*
 ============================================================================
 Name        : 004_Average.c
 Author      : Arun
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,average;
	setbuf(stdout, NULL);
	printf("Enter 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
	average=(a+b+c)/3;
	printf("Average is %f",average);
	return EXIT_SUCCESS;
}
