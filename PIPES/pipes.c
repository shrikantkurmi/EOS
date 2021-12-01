#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{   unsigned char buff[16];
    pid_t id;
    int fd[2]; //fd => array of file discriptor
    pipe(fd);

    // fd[0] => reading end
    // fd[1] => writing end

    id = fork();
    if (0 == id)
    {
       printf("child: Reading data\n");
       read(fd[0], buff, 16);
       printf("child Read: %s\n",buff);
    }
    else
    {
        printf("parent: writing data\n");
        write(fd[1],"DESD\n)", 5);
        printf("parent: writing done\n");
    }

return 0;

}