#include <stdlib.h>
#include <time.h>
/* main - print number stored in varriable is positive or negative */

/* Return: 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		{
	printf(n, ":is positive:%d\n");
	}
	else if (n < 0)
	{
	printf(n, ":is negative:%d\n");
	}
	else
		{
	printf(n, ":is zero:%d\n");
	}
	return (0);
}
