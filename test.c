#include <stdio.h>

int main()
{
	int a=100;
	int *p = &a;
	*p = 300;
	printf("%d", a);
}