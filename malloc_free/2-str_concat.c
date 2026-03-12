#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to add to s1
 *
 * Return: a pointer to the newly allocated space in memory containing
 * the concatenated strings, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, i2, j, j2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	i2 = 0;
	j = 0;
	j2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (i2 = 0; s2[i2] != '\0'; i2++)
		;
	result = malloc(sizeof(char) * (i + i2 + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		result[j] = s1[j];
	}
	for (j2 = 0; s2[j2] != '\0'; j++, j2++)
	{
		result[j] = s2[j2];
	}
	result[j] = '\0';
	return (result);
}
