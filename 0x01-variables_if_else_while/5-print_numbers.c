#include <stdio.h>

/**
 * main - Prints single digit of base 10 starting from 0 function putchar
 * Return:0 is a success
*/

int main(void)

{
        int n;

        for (n = '0'; n <= '9'; n++)
                putchar(n);
        putchar('\n');

        return (0);
}
