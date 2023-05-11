#include "main.h"

/**
 * factorial - function thatcalculates factorial of a given number
 * @n: number to calculate factorial 
 * Return: nothing
 */

int factorial(int n)

{
if (n < 0)
return (-1);

if (n <= 1)
return (1);

return (n * factorial(n - 1));
}
