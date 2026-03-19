#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <unistd.h>
#include <stdio.h>

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