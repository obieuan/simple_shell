#include "shell.h"
/**
 * liberarMemArr - Función que libera la memoria de un arreglo de str.
 * @args: Arreglo de char que contiene la cadena a liberar.
 * Return: Nothing
 */
void liberarMemArr(char **args)
{
	int i = 0;

	while (args[i])
	{
		free(args[i]);
		i++;
	}
}
