#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[15];
int counter = 0;
int i = 0;
void* doSomeThing(void *arg)
{
  //  unsigned long i = 0;
//    int   i = 0;
    counter += 1;
    printf("\n Job %d started\n", counter);

//    for(i=0; i<(0xFFFFFFFF);i++);
    for(i=0; i<=15; i++);
    printf("\n Job %d finished\n", counter);

    return NULL;
}

int main(void)
{
 //   int i = 0;
    int err;
 //   int  counter=0;
    while(i <= 15)
    {
        err = pthread_create(&(tid[i]), NULL, &doSomeThing, NULL);
        if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        i++;
    }

    pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);
    pthread_join(tid[2], NULL);
    pthread_join(tid[3], NULL);
    pthread_join(tid[4], NULL);
    pthread_join(tid[5], NULL);
    pthread_join(tid[6], NULL);
    pthread_join(tid[7], NULL);
    pthread_join(tid[8], NULL);
    pthread_join(tid[9], NULL);
    pthread_join(tid[10], NULL);
    pthread_join(tid[11], NULL);
    pthread_join(tid[12], NULL);
    pthread_join(tid[13], NULL);
    pthread_join(tid[14], NULL);
 //   pthread_join(tid[15], NULL);

    return 0;
}

