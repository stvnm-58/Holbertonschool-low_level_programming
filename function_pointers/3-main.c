#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - effectue des opérations simples
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{

if (argc != 4)
{
	printf ("Error\n");
	exit (98);
}

int (*f)(int, int);

int num1;
int num2;

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

f = get_op_func(argv[2]);

if (f == NULL || argv[2][1] != '\0')
{
	printf("Error\n");
	exit (99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
	printf("Error\n");
	exit (100);
}


printf("%d\n", f(num1, num2));
return (0);

}
