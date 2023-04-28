#include "main.h"
/*
 * main -  prints the numbers using function putchar
 * Return: numbers 0 upto 9
 */

void print_numbers(void)

{

int c;
for (c = 0; c <= 9; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
