/*
 ============================================================================
 Name        : EX2.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
struct Sdistance
{
	int   feet;
	float inch;
};
int main(void) {
struct Sdistance d1,d2,sum;
printf("Enter information for first distance: \n");
fflush(stdout);
printf("Enter feet: ");
fflush(stdout);fflush(stdin);
scanf("%d",&d1.feet);
printf("Enter inch: ");
fflush(stdout);fflush(stdin);
scanf("%f",&d1.inch);
printf("Enter information for Second distance: \n"); fflush(stdout);
printf("Enter feet: ");
fflush(stdout);fflush(stdin);
scanf("%d",&d2.feet);
printf("Enter inch: ");
fflush(stdout);fflush(stdin);
scanf("%f",&d2.inch);
sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;
if(sum.inch>12)
{
	++sum.feet;
	sum.inch-=12;
}
printf("sum of distances= %d feet - %f inch",sum.feet,sum.inch);
}
