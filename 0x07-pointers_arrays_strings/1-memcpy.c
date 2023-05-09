#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies bytes from memory to memory area
 * @n: input
 * @dest: area to be stored
 * @src: memory area bytes from
 * Return: 0 is success
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
