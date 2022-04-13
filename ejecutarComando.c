#include "shell.h"
/**
 * ejecutarComando - Función que ejecuta el comando que se le pasa como
 * argumento.
 * @args: Arreglo de char que contiene la cadena a dividir.
 * Return: Nothing
 */
void ejecutarComando(char **args, char *str)
{

	pid_t pid;
	int status, i = 0;
	char *path = NULL;

	pid = fork();
	if (pid == 0)
	{
		if (args[0][0] == '/')
			execve(args[0], args, NULL);
		path = _getenv(args[0]);

		if (path)
		{
			args[0] = _strdup(path);
			execve(args[0], args, NULL);
		}
		else
		{
			while (args[0][i])
				i++;
			write(STDOUT_FILENO, args[0], i), write(STDOUT_FILENO, ": ", 3);
			write(STDOUT_FILENO, "Invalid command\n", 17);
			liberarMemArr(args);
			free(str);
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("Error");
		liberarMemArr(args);
		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
