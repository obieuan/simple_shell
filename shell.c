#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void prompt()
{
    printf("\n");
    printf("algo# ");
}

int main(void)
{
    while(1) {
        prompt();
    }
}

