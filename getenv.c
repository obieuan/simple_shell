#include "shell.h"
/**
 *_getenv - retorna ubicacion de path
 *@ruta: ruta del archivo
 *Return: char
 */
char *_getenv(char *ruta)
{
	char *path = "PATH", *direccion = NULL;
	char *getenvp = NULL, **directorio = NULL;
	int i = 0;
	struct stat st;


	getenvp = getpath(path);

	directorio = dividirString(getenvp, ":");
	for (i = 0; directorio[i]; i++)
	{
		direccion = _concat(directorio[i], ruta);
		if (stat(direccion, &st) == 0)
		{

			return (direccion);
		}
		free(direccion);
	}
	i = 0;

	while (directorio[i])
	{

		free(directorio[i++]);
	}
	free(getenvp);
	return (NULL);
}
/**
 *getpath - search path diretory
 *@direction: path name
 *Return: char
 */
char *getpath(const char *direction)
{
	int index;
	char *tmp = NULL, **tmp2 = NULL, *rt = NULL;

	if (direction)
	{
		index = ubicationpath(direction);
		if (index >= 0)
		{

			tmp = strdup(environ[index]);

			tmp2 = dividirString(tmp, "=");
			rt = _strdup(tmp2[1]);
		}
		else
			return (NULL);
		liberarMemArr(tmp2);
		free(tmp2);
		free(tmp);
	}
	return (rt);
}


/**
 *ubicationpath - search position of path in the enviroment file
 *@direction: name of directory
 *Return: position in file
 */

int ubicationpath(const char *direction)
{
	int i = 0, j = 0, len = 0, len1 = 0;

	while (environ && environ[i])
	{
		while (environ[i][len] != '=')
			len++;
		len1 = len;
		while (len > 0)
		{
			if (environ[i][j] == direction[j])
				j++;
			else
				break;
			len--;
		}
		if (len1 == j && j != 0)

			return (i);
		i++;
		j = 0;
		len = 0;
		len1 = 0;
	}
	liberarMemArr(environ);
	return (-1);
}


/**
 *_concat - concatenate two strings
 *@str: firts string
 *@strconcat: second string
 *Return: pointer whit concatenate string
 */

char *_concat(char *str, char *strconcat)
{
	int i = 0, j = 0, k, l;
	char *con;

	if (str == NULL)
		str = "";
	if (strconcat == NULL)
		str = "";
	while (str[i] != '\0')
		i++;
	while (strconcat[j] != '\0')
		j++;
	con = malloc(sizeof(char) * (i + j + 2));
	if (con == 0)
		return (NULL);
	for (k = 0; k < i; k++)
		con[k] = str[k];
	con[k++] = '/';
	for (l = 0; l < j; l++)
		con[k++] = strconcat[l];
	con[k] = '\0';
	return (con);

}
