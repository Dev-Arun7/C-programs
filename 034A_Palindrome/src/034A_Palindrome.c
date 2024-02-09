/*
 ============================================================================
 Name        : 034A_Palindrome.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char word[20];
	int length,i,flag=0;
	setbuf(stdout,NULL);
	printf("Enter the word \n");
	scanf("%s",word);
	length=strlen(word);
	//Checking letters
	for(i=1;i<=length;i++)
	{
		if(word[i]!=word[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("The word is a palindrome");
	}
	else
	{
		printf("The word is't a palindrome");
	}



	return EXIT_SUCCESS;
}
