#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

char **dividirString(char *str, char *divisor);
void imprimirArgumentos(char **args);
void ejecutarComando(char **args);
void variablesEntorno();


#endif