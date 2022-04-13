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
	char *buff = NULL, space[1] = " ";
	size_t buff_size = 0;
	char exit_str[6] = "exit", env_str[4] = "env", delim[2] =  " ";
	int estatus;

	if (isatty(STDIN_FILENO) > 0)
		prompt();
	while (1)
	{		/* obtengo la linea que ingresa el usuario */
		estatus = getline(&buff, &buff_size, stdin);
		/* si es un EOF termino la aplicación */
		if (estatus == EOF)
		{
			break;
		}
		buff[estatus - 1] = '\0';
		if (strcmp(buff, exit_str) == 0)
		{
			free(buff);
			exit(1);
		}
		else if (strcmp(buff, env_str) == 0)
			/* imprimo las variables de entorno */
			variablesEntorno();
		else
		{	/* divido la linea en tokens */
			if (buff[0] == space[0])
				buff = borrarEspacio(buff, 0);
			/* ejecuto el comando */
			ejecutarComando(dividirString(buff, delim), buff);
		}
		if (isatty(STDIN_FILENO) > 0)
			prompt();
	}
	return (0);
}
