#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string to be modfied
 * Return: void
 */

void puts_half(char *str)

{
int j = 0;
int b;

while (str[j] != '\0')
{
j++;
}
if (j % 2 == 1)
{
b = (j - 1) / 2;
b += 1;
}
else
{
b = j / 2;
}

for (; b < j; b++)
{
_putchar (str[b]);
}
_putchar('\n');
}

