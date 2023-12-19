#include <stdio.h>

void hello(int a, int b)
{
	printf("hello %d %d \n", a, b );
}

void main() 
{
	int a = 2048;
	int b = 4096;
	hello(a, b);
}

