#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <dlfcn.h>
int main(int argc, char* argv[])
{
    double (*mycos)(double m);
    void *mlibhandle=dlopen("libm.so",RTLD_LAZY);
    dlerror();

    mycos=dlsym(mlibhandle,"cos");
    printf("cos of 45 = %f",mycos(45));
    dlclose(mlibhandle);
}
 
