#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main ()
{
    pid==fork()
    if (pid==-1)
    {
        printf(perror(char *"erreur création processus fils"));
        exit(1)
    }
    else if (pid)
    {
        printf("Mon PID: %d\n"getpid(void));
    }
    else
    {
        printf(getpid(void));
        printf(getppid(void));
    }
    exit (0)
}