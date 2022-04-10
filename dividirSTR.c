#include "shell.h"
/**
 *divide_string - create array of strings
 *@str: string argument
 *@divide: character for create division
 *Return: pointer to pointer
 */
char **dividirSTR(char *str, char *divisor)
{
    int contador = 0;
    char *t1 = NULL;
    char **comandos = NULL;        
   /*Obtengo el primer token*/
   t1 = strtok(str, &divisor);
   /*reviso cuantas palabras tiene la string*/
   while( t1 != NULL ) {
      contador++;
      t1 = strtok(NULL, &divisor);
   }
   /*creo un array de punteros a char*/
   comandos = malloc(sizeof(char *) * (contador + 1));
   
   if (!comandos)
   {
      free(comandos);
      return (NULL);
   }
    /*obtengo el primer token*/
    t1 = strtok(str, &divisor);
    /*reviso cuantas palabras tiene la string*/
    while( t1 != NULL ) {
       comandos[contador] = t1;
       contador--;
       t1 = strtok(NULL, &divisor);
    }
    free(str);
    free(t1);
    return (comandos);
}
