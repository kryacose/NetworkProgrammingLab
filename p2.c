#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    printf("ProcessID: %d\n", getpid());
    fork();
    printf("AFTER FORK\nParentProcessID: %d\n", getppid());
    printf("ProcessID: %d\n", getpid());

}