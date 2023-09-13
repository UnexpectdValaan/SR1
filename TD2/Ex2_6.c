int main()
{
    int i;
    for(i=0;i<2;i++)
    switch(fork())
    {
        case -1:perror("fork");
                exit(1)
        case 0: if (i==0) 
        fils_ls()
        else fils_pwd();
        default: wait(NULL);
        "=>séquence des 2 fils"


    }
    exit(0);
}

void fils_ls()
{
    execlp("ls","ls","-l",NULL);
    perror ("execlp");
    exit (1);
}

void fils_pwd()
{
    while(wait(NULL)!=-1){
        execlp("pwd","pwd",NULL);
        perror("execlp");
        exit(1);
    }
}