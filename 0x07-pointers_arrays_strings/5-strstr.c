#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring
 * @needle: substring
 * @haystack: string
 * Return: 0 is a success
 */

char *_strstr(char *haystack, char *needle)

{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
