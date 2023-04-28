#include "main.h"

/**
 * more_numbers - Print the numbers 10 times from 0 up to 14
 * Return: 0 is a success
 */

void more_numbers(void)
{

int b, c;

for (b = 1; b <= 10; b++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar('1');
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}
