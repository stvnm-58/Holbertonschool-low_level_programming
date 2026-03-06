#include "main.h"

int main(char *argv[])
{

int i = 0;

while (argv[0][i] != '\0')
{
	_putchar(argv[0][i]);
	i++;
}

_putchar('\n');
return (0);
}