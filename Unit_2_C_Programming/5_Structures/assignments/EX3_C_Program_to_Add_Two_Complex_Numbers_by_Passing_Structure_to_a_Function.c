/*
 ============================================================================
 Name        : EX3.c
 Author      : abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
struct Scomplex
{
	float   real;
	float imaginary;
};
struct Scomplex addnumbers(struct Scomplex num1,struct Scomplex num2)
{
	struct Scomplex sum;
	sum.real=num1.real+num2.real;
	sum.imaginary=num1.imaginary+num2.imaginary;
return sum;
}
int main(void) {


struct Scomplex num1,num2,sum;
printf("Enter first complex number\n");fflush(stdout);
printf("Enter real and imaginary respectively: ");
fflush(stdout);fflush(stdin);
scanf("%f %f",&num1.real,&num1.imaginary);
printf("Enter second complex number\n");fflush(stdout);

printf("Enter real and imaginary respectively: ");
fflush(stdout);fflush(stdin);
scanf("%f %f",&num2.real,&num2.imaginary);
sum=addnumbers(num1,num2);
printf("sum=%0.1f + %0.1fi",sum.real,sum.imaginary);
}
