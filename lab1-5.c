#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("enter p ");
	scanf("%f",&p);
    printf("enter r ");
	scanf("%f",&r);
	printf("enter t ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest=%f",si);
}
