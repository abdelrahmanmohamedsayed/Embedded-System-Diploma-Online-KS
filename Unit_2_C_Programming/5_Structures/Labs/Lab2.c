/*
 ============================================================================
 Name        : Lab2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Scomplex
{
	float m_R; //Real part
	float m_I; //imaginary part
};
struct  Scomplex ReadComplex(char text[])
{
	struct Scomplex x;
	printf("Enter %s complex number ex ( 5, -3)",text);
fflush(stdin);fflush(stdout);
	scanf("%f, %f",&x.m_R,&x.m_I);
	return x;
}
struct Scomplex addnumbers(struct Scomplex A,struct Scomplex B)
{
	struct Scomplex C;
	C.m_I=A.m_I+B.m_I;
	C.m_R=A.m_R+B.m_R;
return C;
}
void printnumbers(char text[],struct Scomplex c)
{

	printf("%s =(%.1f)+j(%.1f)",text,c.m_R,c.m_I);
}

int main(void) {
	struct Scomplex x=ReadComplex("A");
	struct Scomplex y=ReadComplex("B");
	struct Scomplex z=addnumbers(x,y);
		printnumbers("C",z);


}
