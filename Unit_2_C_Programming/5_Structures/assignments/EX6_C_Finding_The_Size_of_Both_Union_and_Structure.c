/*
 ============================================================================
 Name        : EX5.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
union job
{
	char name [32];
	float salary;
	int worker_no;

}u;
struct job1
{
	char name [32];
	float salary;
	int worker_no;

}s;

int main(void)
{
printf("size of union = %d",sizeof(u));
printf("\nsize of structure = %d",sizeof(s));


}
