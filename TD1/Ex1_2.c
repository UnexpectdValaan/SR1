#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char * argv[], char * envp[] )
{
    char * valeur;
    if (argc !=2)
    {
        printf(stderr,"%s mauvais nombre de paramètres \n", argv[0]);
        exit (1);
    }
    valeur=getenv(argv[1]);
    if (valeur==NULL)
    printf(stderr,"%s erreur getenv \n",argv[0])
    printf(stderr,"%s\n",argv[1])
    exit (2);
}
