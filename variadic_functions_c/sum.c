Â#include <stdio.h>

int sun(int x, int y);

/**
 * main - sum two numbers 
 * @x - first integer
 * @y - second integer
 * Return - Result
 */

int main(void)
{

	int n;

	n = sum(10, 45);
	printf("%d\n", n);

	return (0);
}

int sum (int x, int y)
{
	int result;
	result = x + y;

	return (result);
}

