#include<stdio.h>
#include <pthread.h>
void *i2c_thread(void *data)
{
    printf("i2c init started\n");
    sleep(1);
    printf("i2c init completed\n");
}
void *eth_thread(void *data)
{
    printf("eth init started\n");
    sleep(2);
    printf("eth init completed\n");
}
void *uart_thread(void *data)
{
    printf("uart init started\n");
    sleep(4);
    printf("uart init coimpleted\n");
}
void *eeprom_thread(void *data)
{
    printf("eeprom init statrted\n");
    sleep(5);
    printf("eeprom init completed");
}
int main(int argc,char const *argv[])
{
    pthread_t i2c,eth,uart,eeprom;
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

