#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: number of arguments suplied to program
 * @argv: array of pointer to the arguments
 * Return: if number of arguments is not exactly one - 1 otherwise - 0
 */

int main(int argc, char *argv[])

{
int cents, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (0);
}
cents = atoi(argv[1]);

while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
printf("%d\n", coins);

return (0);
}
