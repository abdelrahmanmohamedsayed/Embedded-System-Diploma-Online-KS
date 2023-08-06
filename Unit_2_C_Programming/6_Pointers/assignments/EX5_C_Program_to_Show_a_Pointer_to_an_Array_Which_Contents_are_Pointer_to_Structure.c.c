/*
 ============================================================================
 Name        : ex5.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct SEmployee
{
	char name[15];
	int id;
};

int main()
{

	struct SEmployee emp1 ={"abdelrahman",2000} , emp2={"mohamed",12} , emp3={"sayed",10};
	struct SEmployee* arr[]={&emp1,&emp2,&emp3};
	struct SEmployee *((*ptr)[3])=&arr;
	printf("Exmployee Name :%s\n",(*(*ptr))->name);
	printf("Exmployee id :%d",(*(*ptr))->id);

}
