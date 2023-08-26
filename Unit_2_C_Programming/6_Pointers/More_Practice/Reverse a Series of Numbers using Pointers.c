/*
 ============================================================================
 Name        : Reverse a Series of Numbers using Pointers.c

 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(void)
{
	int a[N],*p;
printf("Enter %d elements of array",N);
fflush(stdout);fflush(stdin);
for(p=a;p<=a+N-1;p++)
{
	scanf("%d",p);
}
printf("array in reverse\n");
fflush(stdout);
for(p=a+N-1;p>=a;p--)
{
	printf("%d",*p);
}
}
