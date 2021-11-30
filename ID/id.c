#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char *argv[])
{
    pid_t id;
    id=getpid();
    printf("process id = %d\n",id);
    return 0;
}