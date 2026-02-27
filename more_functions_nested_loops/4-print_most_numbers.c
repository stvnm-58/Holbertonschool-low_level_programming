#include "main.h"
/**
* print_most_numbers - prints the numbers, from 0 to 9,
* except 2 and 4, followed by a new line
*/
void print_most_numbers(void)
{
int a = 0;

	while (a <= 9)
	{
		if (a == 1 || a == 3)
		{
			a = a + 2;
		}
		else
		{
			_putchar(a + '0');
			a++;
		}
	}

_putchar('\n');
}
