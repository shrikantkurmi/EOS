#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t id;
    printf("before fork\n");
    id = fork();
    printf("after fork:%d\n", id);

    if (0 == id)
    { 
        printf("child\n");
    }
    else
    {
        printf("parent\n");
    }    
    return 0;
}