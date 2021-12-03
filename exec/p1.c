#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    pid_t id;
    printf("before the fork\n");

    id = fork();

    printf("after the fork\n");

    if(0 == id)
    {
       printf("child:before the exec\n");

       execl("/bin/ls","/bin/ls",NULL);

       printf("child:after the exec\n");
    }
    else
    {
        printf("parent\n");
    }
        printf("program exited\n");
        return 0;
}

