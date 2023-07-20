/*
 ============================================================================
 Name        : add nmbers.c
 Author      :abdelrahman sayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
enum type{INT,FLOAT,DOUBLE};
union sum
{
	int a;
	float b;
	double c;
};
union sum addnumbers(union sum num1,union sum  num2,enum type choice )
		{
	union sum result;
	switch(choice)

	{
	case INT:
		result.a=num1.a+num2.a; break;
	case FLOAT :
		result.b=num1.b+num2.b; break;
	case DOUBLE :
		result.c=num1.c+num2.c;break;
	}
return result;
		}

int main(void) {
union sum num1,num2,R;
num1.a=5;
num2.a=6;
R= addnumbers(num1,num2,INT);
printf("%d+%d=%d\n",num1.a,num2.a,R.a);
num1.b=5.2;
num2.b=6.5;
R= addnumbers(num1,num2,FLOAT);
printf("%0.1f+%0.1f=%0.1f\n",num1.b,num2.b,R.b);
num1.c=14.005;
num2.c=6.05;
R= addnumbers(num1,num2,DOUBLE);
printf("%0.1lf+%0.1lf=%0.1lf",num1.c,num2.c,R.c);
}

