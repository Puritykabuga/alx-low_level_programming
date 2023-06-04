#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @list_t - list
 * @h: pointer to the list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{

if (!h->str)
printf("[0] (nil)\n");
else
printf("[%U] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
