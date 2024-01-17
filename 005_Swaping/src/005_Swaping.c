/*
 ============================================================================
 Name        : 005_Swaping.c
 Author      : Arun
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;
	setbuf(stdout, NULL);

	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;

	printf("a = %d\n",a);
	printf("b = %d\n",b);

	printf("a:%d   b:%d",a,b);

	return EXIT_SUCCESS;
}
