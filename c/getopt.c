#include <stdio.h>
#include <assert.h>
#include <getopt.h>
int main(int argc, char* argv[])
{
    const char *short_opt="ho:";
    const struct option long_option[]={
        {"help",0,NULL,'u'},
        {"object",1,NULL,'o'}
    };
    int next_arg;
    do{
        next_arg=getopt_long(argc,argv,NULL,long_option,NULL);
        switch(next_arg)
        {
        case 'h':
            printf("help\n");
            break;
        case 'o':
            printf("o-%s\n",optarg);
            break;
        case '?':
            printf("?\n");
            break;
        case -1:
            break;
        }
    }while(next_arg!=-1);
    return 0;
}