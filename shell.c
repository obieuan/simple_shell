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

    if(isatty(STDIN_FILENO)>0)
    {
        prompt();
    }

    while(1) {

    }
}

