#include "shell.h"
/**
 * dividirString - Función que recibe un arreglo de char y divide la cadena
 * en tokens separados por el caracter 'delim'.
 * @str: Arreglo de char que contiene la cadena a dividir.
 * @delim: Caracter que separa los tokens
 * Return: Nothing
 */
char **dividirString(char *str, char *delim)
{
	char *token = NULL, *token2 = NULL, *str2 = NULL;
	int strings = 0, i = 0;
	char **stringArr = NULL;

	str2 = _strdup(str);
	token = strtok(str, delim);

	while (token)
	{
		strings++;
		token = strtok(NULL, delim);
	}

	stringArr = malloc(sizeof(char *) * (strings + 1));
	if (!stringArr)
		return (NULL);
	token2 = strtok(str2, delim);

	while (token2)
	{
		stringArr[i] = _strdup(token2);
		token2 = strtok(NULL, delim);
		i++;
	}

	stringArr[i] = NULL;
	free(token2);
	free(str2);
	return (stringArr);
}
