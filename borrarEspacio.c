#include "shell.h"
/**
 *borrarEspacio -funcion que borra espacios en blanco
 *@str: string a borrar
 *@index: indice a borrar
 *Return: string sin espacios en blanco
 */

char *borrarEspacio(char *str, int index)
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
