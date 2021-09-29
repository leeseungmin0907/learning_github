#include <stdio.h>

int main()
{
	int a=100;
	int *p = &a;
	*p = 300;
	//주석이에용
	printf("%d", a);
}