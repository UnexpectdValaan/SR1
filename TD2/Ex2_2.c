#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    pid_t lespid[MAX]
    succ=getppid();
    for(int i=MAX ,i>0,i--)
    {
        switch(lespid[i]=fork())
    {
        case -1:
            perror("échec fork");
            exit(1);
        case 0:
            fils(i);
            exit(0);
        default:
            pere();
            break;

    }
    }
}
Void fils(int num)
{
    printf("mon numéro est %d",num);
    printf("mon PID est %d",(int)getpid());
    printf("le PID de mon successeur est %d",(int)succ);

}
Void pere()
{
    while ((pid=wait(&CIR))!=-1)
    {
        printf("le fils %d se termine. Code : %d \n",(int)pid, WEXITSTATUS);
    }
    exit(num);

  

}