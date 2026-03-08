#include "main.h"

int main(int argc, char *argv[])
{
	int i, j, n1 = 0, n2 = 0, res, div = 1;

	if (argc != 3)
	/*Bloc error*/
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r'), _putchar('\n');
		return (1);
	}
	/* conversion argv[1] en entier */
	for (i = (argv[1][0] == '-') ? 1 : 0; argv[1][i] != '\0'; i++)
		n1 = (n1 * 10) + (argv[1][i] - '0');
	if (argv[1][0] == '-')
		n1 = -n1;
	/* conversion argv[2] en entier */
	for (j = (argv[2][0] == '-') ? 1 : 0; argv[2][j] != '\0'; j++)
		n2 = (n2 * 10) + (argv[2][j] - '0');
	if (argv[2][0] == '-')
		n2 = -n2;
	res = n1 * n2;
	if (res == 0)
		_putchar('0');
	else
	{
		if (res < 0)
		/*affichage des négatifs*/
		{
			_putchar('-'), res = -res;
		}
		while (div <= res / 10)
		/*x10 pour à chaque tourne pour print centaine, dizaine, unité etc etc.*/
			div *= 10;
		while (div > 0)
		/* Affichage des chiffres */
		{
			_putchar(((res / div) % 10) + '0'), div /= 10;
		}
	}
	_putchar('\n');
	return (0);
}