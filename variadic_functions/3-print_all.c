#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Imprime un caractère
 * @liste: Liste des arguments variadiques
 */
void print_char(va_list liste)
{
	printf("%c", va_arg(liste, int));
}

/**
 * print_int - Imprime un entier
 * @liste: Liste des arguments variadiques
 */
void print_int(va_list liste)
{
	printf("%d", va_arg(liste, int));
}

/**
 * print_float - Imprime un nombre à virgule (float)
 * @liste: Liste des arguments variadiques
 */
void print_float(va_list liste)
{
	printf("%f", va_arg(liste, double));
}

/**
 * print_string - Imprime une chaîne de caractères
 * @liste: Liste des arguments variadiques
 */
void print_string(va_list liste)
{
	char *str = va_arg(liste, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Imprime n'importe quel type selon le format fourni
 * @format: Liste des types d'arguments (c, i, f, s)
 */
void print_all(const char * const format, ...)
{
	va_list liste;
	int i = 0, j;
	char *sep = ""; /* Vide au début pour ne pas print de virgule au 1er tour */
	format_t lettre[] = {
		{'c', print_char}, {'i', print_int},
		{'f', print_float}, {'s', print_string},
		{'\0', NULL}
	};

	va_start(liste, format);

	/* Boucle tant que le format existe et n'est pas terminé */
	while (format && format[i])
	{
		j = 0; /* Remise à zéro pour parcourir le tableau 'lettre' à chaque fois*/
		while (lettre[j].symbole != '\0')
		{
			if (format[i] == lettre[j].symbole)
			{
				printf("%s", sep);
				lettre[j].fonction(liste);
				sep = ", "; /* Devient une virgule après le 1er élément imprimé */
				break;
			}
			j++;
		}
		i++;
	}

	va_end(liste);
	printf("\n");
}
