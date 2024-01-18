/*
 ============================================================================
 Name        : 008_Simple.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,N,SI;
	setbuf(stdout, NULL);
	printf("Enter P,R and N values");
	scanf("%d,%f,%f",&P,&R,&N);
	SI=(P*R*N)/100;
	printf("Simple interst is: %f",SI);
	return EXIT_SUCCESS;
}
