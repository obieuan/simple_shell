#include "shell.h"
/**
 **_strdup - return the pointer
 *@str: entry point
 *Return: char
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{}
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
