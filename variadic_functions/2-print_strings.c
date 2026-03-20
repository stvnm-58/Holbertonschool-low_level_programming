#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * @...: a variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If a string is NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list chaine;
	unsigned int i;
	char *ptr;
	va_start(chaine, n);

	
for (i = 0; i < n ; i++)
{

ptr = va_arg(chaine, char *);

	if(ptr == NULL)
	{
		printf("(nil)");
	}

	else
	{
	printf("%s", ptr);
	}

	if (separator != NULL && i < n - 1)
	{
		printf("%s",separator);
	}

}
printf("\n");
va_end(chaine);
}
