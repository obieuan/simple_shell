#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void prompt()
{
    char prompt[] = "simple_shell> ";
    write(STDOUT_FILENO, prompt, strlen(prompt));
}

int main(void)
{
    
    char *buff = NULL;
    size_t buff_size = 1024;
    char exit_str[] = "exit";
    char env_str[] = "env";
    int estatus;

    if(isatty(STDIN_FILENO)>0)
    {
        prompt();
    }

    while(1) {

        estatus = getline(&buff, &buff_size, stdin);            
        
        if (estatus == EOF)
        {
            write(STDOUT_FILENO, "\n",  1);
            break;
        }
        buff[strlen(buff)-1] = '\0';

        if (strcmp(buff, exit_str) == 0)
        {
            write(STDOUT_FILENO, "\n",  1);
            break;
        }
        else if (strcmp(buff, env_str) == 0)
        {
            write(STDOUT_FILENO, "\n",  1);
            system("env");
        }
        else
        {
            write(STDOUT_FILENO, "\n",  1);
            system(buff);
        }
        if(isatty(STDIN_FILENO)>0)
        {
            prompt();
        }
    }
    return (0);
}

