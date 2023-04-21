#include <stdio.h>
/**
 * main -program that prints the size of various types on the computer it is compiled and run on using printf
 * Return: 0
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
