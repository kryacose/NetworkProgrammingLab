#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

void *threadFun() 
{ 
    printf("Thread ID: %d\n", (int)pthread_self()); 
}

int main(){
    int i; 
    pthread_t tid; 
    pthread_create(&tid, NULL, threadFun, NULL);
    pthread_join(tid, NULL);
    printf("Thread closed\n");
    return 0; 
}