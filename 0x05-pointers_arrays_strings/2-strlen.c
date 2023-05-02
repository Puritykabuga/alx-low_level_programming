#include <stdio.h>

/**
 * _strlen - function that find length of the string
 * @str: first string length
 * Return: length of string
 */

size_t _strlen(const char *str)

{
size_t length = 0;
while (*str++)
length++;
return (length);
}
