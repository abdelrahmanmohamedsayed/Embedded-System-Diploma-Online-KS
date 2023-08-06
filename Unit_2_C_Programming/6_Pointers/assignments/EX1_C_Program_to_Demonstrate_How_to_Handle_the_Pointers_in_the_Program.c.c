/*
 ============================================================================
 Name        : ex1.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m=29;
int* ab;
printf("Address of m :%p\n",&m);
fflush(stdout);
printf("value of m :%d\n",m);
 ab=&m;
printf("Now ab is assigned with the address of m\n");
printf("Address of pointer ab : %p\n",ab);
fflush(stdout);
printf("Content of pointer ab :%d\n",*ab);
m=34;
printf("Address of pointer ab : %p\n",ab);
fflush(stdout);
printf("Content of pointer ab :%d\n",*ab);
*ab=7;
printf("The pointer variable ab is assigned with the value 7 now\n");
printf("Address of pointer ab : %p\n",ab);
fflush(stdout);
printf("Content of pointer ab :%d\n",*ab);
}
