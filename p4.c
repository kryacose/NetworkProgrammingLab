#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    char* myfifo="\tmp\fifo2";
    int x;
    x = mkfifo(myfifo, 0666);
    printf("%d",x);
    return 0;
}