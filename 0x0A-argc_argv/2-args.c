#include "main.h"
#include <stdio.h>

/**
 * main - prints all argumentsn
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is a success
 */

int main(int argc, char *argv[])

{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
