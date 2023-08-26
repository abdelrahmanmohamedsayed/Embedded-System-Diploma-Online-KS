/*
 ============================================================================
 Name        : find mid of array.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int* midarr(int *arr,int size)
{
	return &arr[size/2];
}
int main(void) {
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int *mid=midarr(arr,size);
	printf("mid=%d",*mid);
	return EXIT_SUCCESS;
}
