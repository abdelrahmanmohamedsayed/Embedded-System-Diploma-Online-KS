/*
 ============================================================================
 Name        : ex2.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char alpha[26];
	char* ptr=alpha;
	for(i=0;i<26;i++,ptr++)
	{
		*ptr=i+'A';
	}
	ptr=alpha;
	printf("The Alphabets are :\n");
	for(i=0;i<26;i++,ptr++)
	{


		printf("%c\t",*ptr);
		if(i==15)
			printf("\n");
	}
}
