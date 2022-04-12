#include "shell.h"
/* Función que recibe un arreglo de char y divide la cadena en tokens
 * separados por el caracter 'delim'.
 *
 * @str: Arreglo de char que contiene la cadena a dividir.
 * @delim: Caracter que separa los tokens.
 *
 * Return: Un arreglo de char con los tokens.
 */
char **dividirString(char *str, char *delim)
{
    int contador = 0, contador2 = 0;
    char *t1 = NULL;
    char **comandos = NULL;

<<<<<<< HEAD
    t1 = strtok(str, delim);
    while (t1 != NULL)
    {
        contador++;
        t1 = strtok(NULL, delim);
    }
    comandos = malloc(sizeof(char *) * (contador + 1));
    if (comandos == NULL)
    {
        perror("Error al reservar memoria");
        exit(EXIT_FAILURE);
    }
    t1 = strtok(str, delim);
    while (t1 != NULL)
    {
        comandos[contador2] = t1;
        contador2++;
        t1 = strtok(NULL, delim);
    }
    comandos[contador2] = NULL;
    return (comandos);
=======
	t1 = strtok(str, delim);
	while (t1 != NULL)
	{
		contador++;
		t1 = strtok(NULL, delim);
	}
	comandos = malloc(sizeof(char *) * (contador + 1));
	if (comandos == NULL)
	{
		perror("Error al reservar memoria");
		exit(EXIT_FAILURE);
	}
	t1 = strtok(str, delim);
	while (t1 != NULL)
	{
		comandos[contador2] = t1;
		contador2++;
		t1 = strtok(NULL, delim);
	}
	comandos[contador2] = NULL;
	return (comandos);
>>>>>>> 1048667fcd23714a9e476c97288878eea1469dc3
}
