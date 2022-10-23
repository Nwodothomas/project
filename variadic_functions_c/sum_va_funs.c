#include <stdio.h>
#include <stdarg.h> // contain prototype for the variadic functions

/**
 * main - variadic functions to sum more than two integers
 * @x - first integer
 * @y - second integer
 * @... - more integers optios
 *
 * Return: always result
 */

int sum(int x, int y, ...);

int main(void)
{

	int n;
	
	n = sum(4, 45, 15, 65,25); // 4 is no of loops to be counted, so it is not included
	prinf("%d\n", n);

	return(0)
}

int sum(int count, int x, int y, ...)
{

	va_list mynumbers;
	va_start(mynumbers, y);
	int result;
	int z = va_arg(mynumbers, int);
	int k = va_arg(mynumbers, int);
	int m = va_arg(mynumbers, int);
	result = x + y + z + k + m;
	va_end(mynumbers);
}

