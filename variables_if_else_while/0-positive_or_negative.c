#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints if a random number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", (int)n);
}

if (n == 0)
{
printf("%d is zero\n", (int)n);
}

if (n < 0)
{
printf("%d is negative\n", (int)n);
}
return (0);
}
