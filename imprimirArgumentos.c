#include "shell.h"
/* funcion que imprime los argumentos que se le pasan */
void imprimirArgumentos(char **args)
{
    int i;
    for (i = 0; args[i] != NULL; i++)
    {
        printf("%i: %s\n", i, args[i]);
    }
}