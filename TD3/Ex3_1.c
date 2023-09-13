#include <sys/types.h>
#include <sys/stat.h>
#include  <fcntl.h>
int main()
{
    int f=open("source.txt",O_RDONLY);
    switch(int d=open("destination.txt",O_CREAT|O_EXCL|S_IRUSR|S_IRGP));
    {
        case -1:
        int d=open("destination.txt",O_TRUNC|O_RDWR);
        exit(1);
        default:
        
    }
    exit(0);
    
}