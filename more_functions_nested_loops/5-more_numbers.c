#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14,
* followed by a new line
*/
void more_numbers(void)
{
	int ligne;
	int chiffre;


	for (ligne = 0; ligne < 10; ligne++)
	{
		for (chiffre = 0; chiffre <= 14; chiffre++)
		{
			if (chiffre > 9)
			{
				_putchar((chiffre / 10) + '0');
			}
			_putchar((chiffre % 10) + '0');
		}
		_putchar('\n');
	}
}
