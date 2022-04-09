#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void prompt()
{
    write(STDOUT_FILENO, "algo# ",  6);
}

int main(void)
{
    /*
    //char *buff = NULL;
    //char exit_str[] = "exit";
    //char env_str[] = "env";
    */

    char *buff = NULL;
    size_t buff_size = 0;
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
        if ( estatus == 0)
        {
            continue;
        }
    }
    return (0);
}

