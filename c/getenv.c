#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
extern char** environ;
int main(int argc, char* argv[])
{
    char** var;
    for(var=environ;*var!=NULL;++var)
    {
        printf("%s\n",*var);
    }
    printf("USER=%s\n",getenv("SHELL"));
    return 0;
}
 
