#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * *malloc_checked - allocates memory
 * @b: size to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)

{
void *p;

p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
