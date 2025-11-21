//special operator
#include<stdio.h>
int main()
{
	int a,b,c;
	c=(a=10,b=20,a+b);
	printf("%d",c);
}