/*
 ============================================================================
 Name        : 043_Function.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void)
{
	int num1,num2,c;
	setbuf(stdout,NULL);
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	c=sum(num1,num2);
	printf("The sum is %d",c);



	return EXIT_SUCCESS;
}
int sum(int a,int b)
{
	int result;
	result=a+b;
	return result;

}
