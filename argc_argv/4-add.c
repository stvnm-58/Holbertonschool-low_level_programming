#include "main.h"

int main(argc, char *argv[])
{
	int i =1;
	int j;

while (i < argc)
{

for (j = 0; argv[i][j] != '\0'; j++)
	/*boucle qui scan char(en position j) du argv déterminé par i*/
	{
		if (argv[i][j] < '0')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');

			return (1);
		}

		if (argv[i][j] > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');

			return (1);
		}


	}


	for (j = 0; argv[i][j] != '\0'; j++)



i++
}


}