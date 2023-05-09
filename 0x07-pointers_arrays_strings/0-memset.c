#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @n: first byte
 * @s: area pointed to
 * @b: constant byte
 * Return: 0 is a success
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
