#include "shell.h"
/**
 * ejecutarComando - Función que ejecuta el comando que se le pasa como
 * argumento.
 * @args: Arreglo de char que contiene la cadena a dividir.
 * Return: Nothing
 */
void ejecutarComando(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	else if (pid < 0)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
