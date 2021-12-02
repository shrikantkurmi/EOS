#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char const *argv[])
{
    unsigned char buff[16];
    int fd;
    fd = open("desdfifo",O_WRONLY);
    write(fd,"DESD\n",5);
    printf("WRITE: %s\n",5,buff);
    close(fd);
    return 0;
}