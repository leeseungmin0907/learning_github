#include <stdio.h>

int main()
{
	int a=100;
	int *p = &a;
	int b = 200;
	p = &b;
	*p = 300;
	//edited!
	printf("%d %d", a, b);
}