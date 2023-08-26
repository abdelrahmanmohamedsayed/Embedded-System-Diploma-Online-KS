/*
 ============================================================================
 Name        : Sum of Array Elements using Pointers.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sumarr (int *arr,int size,int* sum)
{
	int i;
	for(i=0;i<size;i++)
	{
		*sum+=arr[i];
	}
}
int main(void)
{
int arr[]={1,2,3,4,5,6,8,9,10};
int size=sizeof(arr)/sizeof(arr[0]);
int sum=0;
int*ptr=&sum;
sumarr(arr,size,&sum);
printf("sum of array equal=%d",*ptr);
}
