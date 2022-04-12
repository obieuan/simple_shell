#include "shell.h"
/**
 * prompt - this function prints the prompt
 * Return: Nothing
 */
void prompt(void)
{
	char prompt[] = "$The empire prompt# ";

	write(STDOUT_FILENO, prompt, strlen(prompt));
}
/**
 * main - This function prints a prompt and reads a line from stdin
 * Return: 0 always
 */
int main(void)
{
	char *buff = NULL;
	char **args = NULL;
	extern char **environ;
	size_t buff_size = 1024;
	char exit_str[] = "exit";
	char env_str[] = "env";
	char delim[] =  " \t\r\n\a";
	int estatus;

	if (isatty(STDIN_FILENO) > 0)
		prompt();

	while (1)
	{
		/* obtengo la linea que ingresa el usuario */
		estatus = getline(&buff, &buff_size, stdin);
		/* si es un EOF termino la aplicación */
		if (estatus == EOF)
		{
			write(STDOUT_FILENO, "\n",  1);
			break;
		}
		buff[strlen(buff) - 1] = '\0';
		if (strcmp(buff, exit_str) == 0)
			break;
		else if (strcmp(buff, env_str) == 0)
		/* imprimo las variables de entorno */		
			print_env(environ);
		else
		{
			/* divido la linea en tokens */
			args = dividirString(buff, delim);
			/*imprimo los argumentos que se obtuvieron*/
			imprimirArgumentos(args);
			/*ejecuto el comando*/
			ejecutarComando(args);
			/*libero la memoria*/
			free(args);
		}
		if (isatty(STDIN_FILENO) > 0)
			prompt();
	}
	return (0);
}
