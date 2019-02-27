// C program to implement one side of FIFO 
// This side writes first, then reads 
#include <stdio.h> 
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 

int fd,uno;
char *myfifo = "/tmp/myfifo", arr[80];

void writeFifo(){
    fd = open(myfifo, O_WRONLY);
    printf("User %d: ",uno); 
    fgets(arr, 80, stdin);
    write(fd, arr, strlen(arr)+1); 
    close(fd);
}

void readFifo(){
    fd = open(myfifo, O_RDONLY);
    read(fd, arr, sizeof(arr)); 
    printf("User %d: %s", uno%2 +1 ,arr); 
    close(fd);
}

int main() 
{   // mkfifo(<pathname>, <permission>) 
	mkfifo(myfifo, 0666);
    printf("User no: ");
    scanf("%d", &uno);
    if(uno == 2)
        readFifo();
	while (1) 
	{ 
        writeFifo();
        readFifo();
	} 
	return 0; 
} 
