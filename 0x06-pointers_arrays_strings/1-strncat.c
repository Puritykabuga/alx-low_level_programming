#include "main.h"

/**
 * _strncat - concatenates two strings using most
 * inputed number of bytes from src
 * @src: the string to be appended
 * @dest: a pointer to the resulting string
 * @n: number of bytes from src to be appended to dest
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
