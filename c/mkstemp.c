#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
int main(int argc, char* argv[])
{
    int fd;
    char file_name[]="/tmp/fuckyeah.XXXXXX";
    fd=mkstemp(file_name);
    if(fd==-1){
        printf("error\n");
        perror("mkstemp");
        return fd;
    }
    printf("before sleep");
    sleep(10);
unlink(file_name);

    printf(":asdasd");
    sleep(10);
    close(fd);


return 0;
}
 
