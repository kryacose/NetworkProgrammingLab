#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    printf("ProcessID: %d\n", getpid());
    printf("ParentProcessID: %d\n", getppid());
    printf("GroupID: %d\n", getgid());
    printf("UserID: %d\n", getuid());
    printf("EffectiveUserID: %d\n", geteuid());
    printf("EffectiveGroupID: %d\n", getegid());
    return 0;
}
