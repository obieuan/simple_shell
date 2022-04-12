#include "shell.h"
/**
 * variablesEntorno - funcion que imprime las variables de entorno
 * Return: Nothing
 */
void variablesEntorno(void)
{
	const char *s = getenv("PATH");

	printf("PATH: %s\n", (s != NULL) ? s : "No hay PATH");
}
