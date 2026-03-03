#include "main.h"
/**
* rev_string - Reverses a string
* @s: The string to be reversed
*/
void rev_string(char *str)
{
	int i = 0;
	int start = 0;
	int end;
	char tmp;

	while (str[i] != '\0')
	{
		i++;
	}

	end = i - 1;

	while (start < end)
	{
		tmp = s[start];
		str[start] = str[end];
		str[end] = tmp;

		start++;
		end--;
	}
}
