#include<stdio.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>
mqd_t cdacmq;// initialisation of message queue
struct mq_attr cdacmq_attr;// pointer to message queue
int main(int argc, char const *argv[])
{
    // details of pointer attribute 
  cdacmq_attr.mq_flags = 0;
  cdacmq_attr.mq_maxmsg = 4;
  cdacmq_attr.mq_msgsize = 128;
  cdacmq_attr.mq_curmsgs = 0;
  // opening of message queue
  cdacmq = mq_open("/cdacmq",O_WRONLY | O_CREAT,S_IRUSR,S_IWUSR,&cdacmq_attr);

  mq_send(cdacmq,"Hello\n",6,0);

  mq_close(cdacmq);

  return 0;
}