#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main ()
{
    pid_r pid;

    switch(pid==fork())
    {
        case -1:
            perror("échec fork");
            exit(1);
        case 0:
            fils(pid);
            exit(0);
        default:
            pere();
            break;

    }
    exit (0);
}
Void fils(pid_t)
{
    printf("mon pid : %d")
}