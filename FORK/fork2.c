#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char const *argv[])
{
    pid_t id;
    printf("before fork\n");

    id = fork();

    if(0 == id)
    {
        printf("child PID: %d\n",getpid());
        printf("child PPID: %d\n",getppid());
    }
    else
    {
        printf("parent PID: %d\n",getpid());
        printf("parent PPID: %d\n",getppid());
        sleep(10);
        printf("parent finished\n");
    }
    return 0;
}