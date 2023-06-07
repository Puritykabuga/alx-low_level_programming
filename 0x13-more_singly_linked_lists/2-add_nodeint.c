#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: node at the beginning
 * @n: node to add
 * Return the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;
p=malloc(sizeof(listint_t));
if(!p)
return (NULL);
p->n=n;
p->next=*head;
*head = p;
return (p);
}
