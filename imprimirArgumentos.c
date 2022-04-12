#include "shell.h"
/**
 * imprimirArgumentos - funcion que imprime los argumentos que se le pasan
 * @args: Arreglo de char que contiene los argumentos.
 * Return: Nothing
 */
void imprimirArgumentos(char **args)
{
	int i;

	for (i = 0; args[i] != NULL; i++)
	{
		printf("%i: %s\n", i, args[i]);
	}
}
