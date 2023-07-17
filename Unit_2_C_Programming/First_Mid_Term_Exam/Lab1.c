/*
 ============================================================================
 Name        : lab1.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
struct Semployee
{
	char name[100][50];
	int BirthDateDay;
	int BirthDateMonth;
	int BirthDateYear;
    int Salary;

};
int main(void) {
	struct Semployee employees[100],tempemployee;
	char firstname[50],secondname[50];
int count=0,i,j;
char text;
do
{
	printf("Enter your first name");
	fflush(stdin);fflush(stdout);
	scanf("%s",firstname);
	printf("Enter your second name");
	fflush(stdin);fflush(stdout);
	scanf("%s",secondname);
	strcpy(employees[count].name[count],firstname);
	strcat(employees[count].name[count]," ");
	strcat(employees[count].name[count],secondname);
	printf("Enter your Birth date for example (day/month/year) 10/12/2000");
	fflush(stdin);fflush(stdout);
	scanf("%d/%d/%d",&employees[count].BirthDateDay,&employees[count].BirthDateMonth,
	&employees[count].BirthDateYear);
	printf("Enter your SaLary");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[count].Salary);
count++;
if(count==100)break;
printf("if you wand to continue add date press (y)");
fflush(stdout);fflush(stdin);
scanf("%c",&text);
}

while(text=='y');
for(i=0;i<count-1;i++)
{
	for(j=i+1;j<count;j++)
	{
		if(employees[i].BirthDateYear>employees[j].BirthDateYear||
		   (employees[i].BirthDateYear==employees[j].BirthDateYear&&
		   employees[i].BirthDateMonth>employees[j].BirthDateMonth)||
		   (employees[i].BirthDateYear==employees[j].BirthDateYear&&
		   employees[i].BirthDateDay>employees[j].BirthDateDay))

		{
			tempemployee=employees[i];
			employees[i]=employees[j];
			employees[j]=tempemployee;

		}

	}
	for(i=0;i<count;i++)

	{
		printf("%s (%d /%d /%d) %d\n",employees[i].name[i],employees[i].BirthDateDay,
				employees[i].BirthDateMonth,employees[i].BirthDateYear,employees[i].Salary);
	}
}

}
