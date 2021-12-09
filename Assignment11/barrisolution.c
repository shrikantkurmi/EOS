#include<stdio.h>
#include <pthread.h>

pthread_barrier_t init_barrier;

void *i2c_thread(void *data)
{
    printf("i2c init started\n");
    sleep(1);
    pthread_barrier_wait(&init_barrier);
    printf("i2c init completed\n");
}
void *eth_thread(void *data)
{
    printf("eth init started\n");
    sleep(4);
    pthread_barrier_wait(&init_barrier);
    printf("eth init completed\n");
}
void *uart_thread(void *data)
{
    printf("uart init started\n");
    sleep(6);
    pthread_barrier_wait(&init_barrier);
    printf("uart init completed\n");
}
void *eeprom_thread(void *data)
{
    printf("eeprom init started\n");
    sleep(8);
    pthread_barrier_wait(&init_barrier);
    printf("eeprom init completed\n");
}
int main(int argc, char const *argv[])
{
    pthread_t i2c,eth,uart,eeprom;

    pthread_barrier_init(&init_barrier,NULL,4);

    pthread_create(&i2c,NULL,i2c_thread,NULL);
    pthread_create(&eth,NULL,eth_thread,NULL);
    pthread_create(&uart,NULL,uart_thread,NULL);
    pthread_create(&eeprom,NULL,eeprom_thread,NULL);
    pthread_join(i2c,NULL);
    pthread_join(eth,NULL);
    pthread_join(uart,NULL);
    pthread_join(eeprom,NULL);

    return 0;
}