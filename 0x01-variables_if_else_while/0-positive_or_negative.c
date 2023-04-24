#include <stdio.h>
#include <time.h>
/* main - print number stored in varriable is positive or negative */

/* Return: always */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		{
	printf("%d is Negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
		{
	printf("%d is negative\n", n);
	}
	return (0);
}
