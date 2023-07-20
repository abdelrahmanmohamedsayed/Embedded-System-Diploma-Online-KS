/*
 ============================================================================
 Name        : EX4.c
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
	struct information my[10];
	char text,firstname[15],secondname[15];
	int count=0,i;
	do{
	printf("Enter information of student\n");
	printf("Enter your first name: ");
	fflush(stdout);fflush(stdin);
	scanf("%s",firstname);
	printf("Enter your second name:  ");
		fflush(stdout);fflush(stdin);
		scanf("%s",secondname);
		strcpy(my[count].name,firstname);
		strcat(my[count].name," ");
		strcat(my[count].name,secondname);
		printf("enter your roll: ");
		fflush(stdout);fflush(stdin);
		scanf("%d",&my[count].roll);
		printf("Enter your mark: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&my[count].marks);
		printf("if you want to continue press y: ");
		fflush(stdout);fflush(stdin);
			scanf("%c",&text);
			count++;
			if(count==10)
				break;

	}
	while(text=='y');
	printf("displaying information\n");

	for(i=0;i<count;i++)
	{
				printf("Name: %s\n",my[i].name); fflush(stdout);
				printf("Roll:%d\n",my[i].roll); fflush(stdout);
				printf("Marks: %0.1f \n",my[i].marks);fflush(stdout);

	}
}

