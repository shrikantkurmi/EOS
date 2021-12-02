#include<stdio.h>
#include <pthread.h>
void *hello_thread(void *arg)
{
    printf("Hello thread\n");
}
void *bye_thread(void *arg)
{
    printf("Bye thread\n");
}
int main(int argc,char const *argv)
{
    pthread_t helloID,byeID;

    printf("hello thread:Before create main thread\n");
    printf("bye thread:Before create main thread\n");

    pthread_create(&helloID,NULL,hello_thread,NULL);
    pthread_create(&byeID,NULL,bye_thread,NULL);

    pthread_join(&helloID,NULL);
    pthread_join(&byeID,NULL);

    printf("hello thread:After creating main thread\n");
    printf("bye thread:After creating main thread\n");

    return 0;

}