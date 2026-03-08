#include "main.h"

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i = 1, j, somme = 0, num, div = 1;

	while (i < argc)
	{
		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		/*boucle qui scan char(en position j) du argv déterminé par i*/
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				_putchar('E'), _putchar('r'), _putchar('r');
				_putchar('o'), _putchar('r'), _putchar('\n');
				return (1);
			}
			num = (num * 10) + (argv[i][j] - '0');
		}
		somme += num;
		i++;
	}
	if (somme == 0)
		_putchar('0');
	else
	{
		while (div <= somme / 10)
			div *= 10;
		while (div > 0)
		{
			_putchar(((somme / div) % 10) + '0');
			div /= 10;
		}
	}
	_putchar('\n');
	return (0);
}
