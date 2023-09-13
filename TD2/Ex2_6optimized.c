#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   switch(pid_t PID=fork()){
    case -1: perror("fork");
    exit(1)
    case 0: fils_ls();
    exit (0);
    default: break
   } 
   pere_pwd();
}

void fils_ls()
{
    execlp("ls","ls","-l",NULL);
    perror ("execlp");
    exit (1);
}

void pere_pwd()
{
    while(wait(NULL)!=-1){
        execlp("pwd","pwd",NULL);
        perror("execlp");
        exit(1);
    }
}