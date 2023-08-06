/*
 ============================================================================
 Name        : ex4.c
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
	int i,n;
	int arr[15];
	int* ptr=&arr[0];
	printf("Input the number of elements to store in the array (max 15):\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("Input %d number of elements in the array :\n",n);
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element\n",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",ptr);
		ptr++;
	}
	printf("The elements of array in reverse order are :\n");
		fflush(stdout);
		for(i=n;i>0;i--)
		{ptr--;
			printf(" %d- element\t",i);
			fflush(stdout);fflush(stdin);
			printf("%d",*ptr);
			printf("\n");
		}


}
