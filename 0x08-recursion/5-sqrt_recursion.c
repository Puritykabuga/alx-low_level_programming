#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: value to find natural squares
 * Return: natural square root
 */

int _sqrt_recursion(int n)

{
return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate square root of a number.
 * @n: value to find natural squares
 * @i: iterate number
 *
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
