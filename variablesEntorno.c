#include "shell.h"
/**
 * variablesEntorno - funcion que imprime las variables de entorno
 * Return: Nothing
 */
void variablesEntorno(void)
{
	int  x = 0;

	while (environ && environ[x])
		{
			printf("%s\n", environ[x]);
			x++;
		}
}
