#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints string
 * @str: string to print
 * Return: void
 */

void rev_string(char *str)

{
for (; *str != '\0'; str--)
{
_putchar(*str);
}
_putchar('\n');
}
