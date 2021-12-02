#include<stdio.h>
#include <pthread.h>

void *bye_thread(void *arg)
{
    printf("bye\n");
}

int main(int argc, char const *argv[])
{
    pthread_t byeID;
    printf("main thread: Before creating bye thread\n");

    pthread_create(&byeID,NULL, bye_thread, NULL);
    pthread_join(&byeID, NULL);

    printf("main thread: After creating bye thread\n");

    return 0;
}
