#include "main.h"

/**
 * main - prints the largest of 3 numbers
 * Return: largest number
 */

int largest_number(int a, int b, int c)

{
int largest;

if (a >= b && b >= c)
{
largest = a;
}
else
{
largest = c;
}
return (largest);
}
