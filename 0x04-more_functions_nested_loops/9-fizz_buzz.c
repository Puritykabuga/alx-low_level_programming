#include "main.h"
#include <stdio.h>

/**
 * main - prints function printf
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples 0f 3, five print Buzz
 * and FizzBuzz for  multiples of both three and five
 *
 * Return: 0 is success
 */

int main(void)

{

int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
