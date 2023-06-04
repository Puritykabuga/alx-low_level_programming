#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to the list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("'%s'", h->str);
count++;
h = h->next;
if (h != NULL)
printf(" , ");
}
printf("]\n");

return (count);
}
