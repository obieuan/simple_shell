#include "shell.h"
/**
 *space_delete - function that delete space in command
 *@str: array
 *@index: position when is the position
 *Return: char
 */

char *space_delete(char *str, int index)
{
	char *cp = NULL, *sp = " ";
	int i = index, j, len = 0;

	if (!str)
		return (NULL);
	while (str[len++])
	;
	while (str[i])
	{
		if (str[i] != sp[0])
			break;
		i++;
	}
	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		cp[j] = str[i++];
	cp[j] = '\0';
	return (cp);
}
