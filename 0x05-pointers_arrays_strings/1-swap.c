#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer input pointer
 * @b: second integer
 * Return: 0 is success
 */


void swap_int(int *a, int *b)
/* function swaps values of two integers */

{

int temp = *a;
*a = *b;
*b = temp;

}
