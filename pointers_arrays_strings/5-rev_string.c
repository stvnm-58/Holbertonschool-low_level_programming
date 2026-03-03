#include "main.h"
/**
* rev_string - Reverses a string
* @s: The string to be reversed
*/
void rev_string(char *s)
{
	int i = 0;
	int start = 0;
	int end;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	end = i - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
