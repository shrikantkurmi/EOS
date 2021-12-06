#include<stdio.h>
#include <pthread.h>

int count = 10;
void *inc_thread(void *arg)
{
    while(1)
    {
        count++;
        printf("inc thread:%d\n",count);
    }
}
void *dec_thread(void *arg)
{
    while(1)
    {
        count--;
        printf("dec thread:%d\n",count);
    }
}
int main(int argc, char const *argv[])
{
    pthread_t incID,decID;
    printf("main thread:before creating hello thread\n");
    pthread_create(&incID,NULL,inc_thread,NULL);
    pthread_create(&decID,NULL,dec_thread,NULL);
    pthread_join(incID,NULL);

    return 0;

}
