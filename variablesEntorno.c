#include "shell.h"
/* funcion que imprime las variables de entorno */
void variablesEntorno()
{
    const char* s = getenv("PATH");
    printf("PATH: %s\n", (s!=NULL)?s:"No hay PATH");
}
