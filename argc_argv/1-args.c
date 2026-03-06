#include "main.h"
/**
* main - prints the number of arguments passed into it
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{

(void)argv;
/*toujours pour exclure argc de la compil'*/

_putchar((argc - 1) + '0');
/*on -1 car il compte aussi le nom*/
_putchar('\n');

return (0);

}
