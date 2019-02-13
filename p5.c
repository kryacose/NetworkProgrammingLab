#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#include<unistd.h>
// #include<sys/types.h>
int main(){
    char* path = "./EXEC";
    execl(path,NULL);
    printf("main END");
    return 0;
}