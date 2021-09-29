#include <stdio.h>

int main()
{
	int a=100;
	int *p = &a;
	int b = 200;
	p = &b;
	*p = 300;
	printf("%d %d", a, b);
	
}