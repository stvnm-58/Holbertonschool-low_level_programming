#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - calculates the sum of all its parameters
* @n: the number of parameters passed to the function
* @...: a variable number of parameters to calculate the sum of
*
* Return: if n == 0 - 0
* otherwise - the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list somme;
unsigned int i;
int total = 0;
if (n == 0)
{
	return(0);
}
va_start(somme, n);
for (i = 0; i < n; i++)
{
	total = total + va_arg(somme, int);
}
va_end(somme);
return (total);
}
