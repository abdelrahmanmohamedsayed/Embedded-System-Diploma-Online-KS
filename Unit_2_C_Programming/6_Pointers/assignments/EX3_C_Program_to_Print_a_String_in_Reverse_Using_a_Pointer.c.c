/*
 ============================================================================
 Name        : ex3.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int i,f;
	char str[50];
	char revstr[50];
	char* ptr=str;
	char* revptr=revstr;
	printf("Input a string : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",str);
	f=strlen(str);
	for(i=0;i<f;i++)
	{
		ptr++;

	}
	for(i=0;i<f;i++)
	{
		ptr--;
		*revptr=*ptr;
		revptr++;
	}
	*revptr='\0';
	printf("Reverse of the string is :%s",revstr);

}
