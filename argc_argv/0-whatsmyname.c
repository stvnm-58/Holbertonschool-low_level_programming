#include "main.h"
/**
* main - prints its name, followed by a new line.
* @argc: number of arguments.
* @argv: array of arguments.
*
* Return: Always 0 (Success).
*/
int main(int argc, char *argv[])
{

int i = 0;
(void)argc;
/*sans ça, le compilateur bloque car argc n'est pas "utilisé"*/

while (argv[0][i] != '\0')
/*argc[0] correspond au nom. Et [i] le caractère qui compose ce nom*/
{
	_putchar(argv[0][i]);
	i++;
}

_putchar('\n');
return (0);
}
