#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14,
* followed by a new line
*/
void more_numbers(void)
{
int a = 0;
int b = 0;

	while (a <= 10)
	{
		while (b <= 14)
		{
		_putchar(b + '0');
		b++;
		}

	_putchar('\n');
	a++;
	}

}
