#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("before the exec\n");

    execl("/bin/ls", "/bin/ls",NULL);
   
    printf("after the exec\n");

    return 0;
}

