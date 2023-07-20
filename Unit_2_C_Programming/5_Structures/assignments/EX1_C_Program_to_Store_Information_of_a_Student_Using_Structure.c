/*
 ============================================================================
 Name        : EX1.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
struct information
{
	char name[20];
	int   roll;
	float marks;
};
int main(void) {
	struct information my;
	char firstname[15],secondname[15];
	printf("Enter information of student\n");
	printf("Enter your first name: ");
	fflush(stdout);fflush(stdin);
	scanf("%s",firstname);
	printf("Enter your second name:  ");
		fflush(stdout);fflush(stdin);
		scanf("%s",secondname);
		strcpy(my.name,firstname);
		strcat(my.name," ");
		strcat(my.name,secondname);
		printf("enter your roll: ");
		fflush(stdout);fflush(stdin);
		scanf("%d",&my.roll);
		printf("Enter your mark: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&my.marks);
		printf("displaying information\n");
		printf("Name: %s\n",my.name); fflush(stdout);
		printf("Roll:%d\n",my.roll); fflush(stdout);
		printf("Marks: %0.1f \n",my.marks);fflush(stdout);
}
