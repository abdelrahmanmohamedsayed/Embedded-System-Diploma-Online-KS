/*
 ============================================================================
 Name        : Using Pointers to Print 2D Arrays.c

 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int a[2][2]={ {1,2},{3,4}};
int r,c;
//fisrst way to print 2d array by 2 loop
printf("array:\t");
for (r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
		printf("%d",a[r][c]);
	}
}
printf("\n");
//second way to print 2d array by pointer

int *ptr;
for(ptr=&a[0][0];ptr<=&a[1][1];ptr++)
{
	printf("%d",*ptr);
}
}
