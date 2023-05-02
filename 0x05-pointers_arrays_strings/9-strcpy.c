#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @src: source value
 * @dest: destination of value
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
int l;
for (l = 0; src[l] != '\0'; l++)
{
dest[l] = src[l];
}
dest[l++] = '\0';
return (dest);
}
