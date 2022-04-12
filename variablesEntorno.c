#include "shell.h"
/* funcion que imprime las variables de entorno */
void print_env(char **args)
{
    int i;
    for (i = 0; args[i] != NULL; i++)
    {
        printf("%i: %s\n", i, args[i]);
    }
}
