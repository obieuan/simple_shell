#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/stat.h>

extern char **environ;
char **dividirString(char *str, char *divisor);
void imprimirArgumentos(char **args);
void ejecutarComando(char **args, char *str);
void variablesEntorno(void);
char *borrarEspacio(char *str, int index);
void liberarMemArr(char **args);
char *_getenv(char *ruta);
char *getpath(const char *direction);
int ubicationpath(const char *direction);
char *_strdup(char *str);
char *_concat(char *str, char *strconcat);

#endif

