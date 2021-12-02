#include<stdio.h>
#include <pthread.h>

void *hello_thread(void *arg)
{
    printf("Hello thread\n");
}

int main(int argc,char const *argv[])
{
    pthread_t helloID;
    printf("main thread: Before creating hello_thread\n");

    pthread_create(&helloID,NULL,hello_thread,NULL);
    printf("main thread: after creating hello_thread\n ");

    return 0;
}