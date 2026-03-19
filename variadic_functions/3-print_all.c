#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

	char *str;
	int i = 0;
	int j = 0;

/*
* En suivant, toutes mes fonctions pour c i f s
*
*/

void print_char(va_list liste)
{
	printf("%c", va_arg(liste, int));
}

void print_int(va_list liste)
{
	printf("%d", va_arg(liste, int));
}

void print_float(va_list liste)
{
	printf("%f", va_arg(liste, double));
}

void print_string(va_list liste)
{
    char *str = va_arg(liste, char *);

    if (str == NULL)
    {
        str = "(nil)";
    }

    printf("%s", str);
}

/**********************************************/

void print_all(const char * const format, ...)
{
	va_list liste;
	va_start(liste, format);


	
format_t lettre[] =
{
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
};

while (format && format[i])
/*
* tant que format existe (diff de NULL)
* et jusqu'à ce que format[i] devienne NULL
*/
{

	while (lettre[j].symbole != NULL)
	{
		
		j++
	}

i++
}

/* ici les appels des différente fonction dépendamment du type d'entré*/
    
	
}
