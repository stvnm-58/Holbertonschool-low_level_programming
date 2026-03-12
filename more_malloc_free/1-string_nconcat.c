#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to include from s2
 * Return: pointer to new string, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, i2 = 0, j, j2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[i2] && i2 < n)
		i2++;
	res = malloc(sizeof(char) * (i + i2 + 1));
	if (res == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		res[j] = s1[j];
	for (j2 = 0; j2 < i2; j++, j2++)
		res[j] = s2[j2];
	res[j] = '\0';
	return (res);
}
