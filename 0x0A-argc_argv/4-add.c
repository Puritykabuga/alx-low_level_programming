#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints sum of arguments positive numbers
 * @argc: arguments to count
 * @argv: arguments vector
 * Return: 0 is a success
 */

int main(int argc, char *argv[])
{
int i;
unsigned int k, sum = 0;
char *e;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];

for (k = 0; k < strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}