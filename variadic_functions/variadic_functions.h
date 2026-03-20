#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <unistd.h>
#include <stdio.h>
/**
* struct format - Structure pour associer un symbole à une fonction
* @symbole: Le caractère représentant le type (ex: c, i, f, s)
* @fonction: Le pointeur vers la fonction de rappel correspondante
*/

typedef struct format
{
	char symbole;
	void (*fonction)(va_list);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);



#endif
