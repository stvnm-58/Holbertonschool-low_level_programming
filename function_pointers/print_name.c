#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function on each element of an array
* @array: the array of integers
* @size: the size of the array
* @action: pointer to the function to be executed
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
	return;
	}
	f(name);
}

