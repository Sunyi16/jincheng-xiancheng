#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

//定义线程运行函数
void* th_fn ( void *arg )
{
    int distance=(int)arg;
    for(int i=1;i<=distance;i++)
    {
        printf("%lx run %d\n",pthread_self(),i);
        int time=(int)(drand48() *100000);
        usleep(time);
    }
    return (void*)0;
}

int main(int argc, char const *argv[])
{
    int err;
    pthread_t    rabbit,turtle;//定义线程标识符
    //创建rabbit线程
    if((err=pthread_create(&rabbit,NULL,th_fn,(void*)50))!=0)//&rabbit是线程地址/NULL是线程属性/（void*)50是传入的数据
        {
            perror("pthread_create error");
        }
    //创建turtle线程
    if((err=pthread_create(&turtle,NULL,th_fn,(void*)50))!=0)
        {
            perror("pthread_create error");
        }
    //主控线程调用pthread_join().自己会阻塞，直到rabbit和tuttle线程结束后运行
    //谁调用谁阻塞
    pthread_join(rabbit,NULL);
    pthread_join(rabbit,NULL);
        printf("control thread id: %lx\n",pthread_self());
        printf("finished!\n");
    return 0;
}
