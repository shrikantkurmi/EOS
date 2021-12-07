#include<stdio.h>
#include <pthread.h>

int count = 10;
pthread_mutex_t mutexcount;// decleration of mutex

void *inc_thread(void *arg)
{
    while(1)
  {
        //lock
      pthread_mutex_lock(&mutexcount);

       count++;
    printf("inc thread:%d\n", count);// critical region between line 14 and 15 

    pthread_mutex_unlock(&mutexcount);
        //unlock
  }
}
void *dec_thread(void *arg)
{

    while(1)
    {
        //lock
    pthread_mutex_lock(&mutexcount);
    count--;
    printf("dec thread:%d\n",count);// critical region between line 28 and 29
    pthread_mutex_unlock(&mutexcount);
        //unlock
    }
}
int main(int argc,char const *argv[])
{
    pthread_t incID,decID;
    printf("main thread:before creating hello thread\n");
    pthread_mutex_init(&mutexcount,NULL);//initialisation of mutex
    pthread_create(&incID,NULL,inc_thread,NULL);
    pthread_create(&decID,NULL,dec_thread,NULL);
    pthread_join(incID,NULL);
    pthread_join(decID,NULL);
    pthread_mutex_destroy(&mutexcount);
    printf("main thread:after creating hello thread");
    //initially mutex is unlock state

    return 0;
}