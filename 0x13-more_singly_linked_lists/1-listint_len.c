#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of elements
 * @h: element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t n  = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
