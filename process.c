#include "header.h"
#include <errno.h>

//void* stop();


 #define _GNU_SOURCE 200
 #define malloc stop_malloc

void* stop_malloc(int a){
    printf("don't call malloc directly , use MALLOC(num , type) instead\n");
    return NULL;
}

int main(){
    char *p;
    p = malloc(10240000);   //0x4005f0

    char str[] = "hello";
    int* num ;

    my_printf("bitch "); //0x400706
    printf("%p\n" , p);
    printf("%d\n%d\n" , getpid() , getppid()); //#define	__S32_TYPE		int  0x4005d0
    

    printf("%p %p %p\n" , malloc , my_printf , getpid);

    free(p);
    printf("num= %d \n" , *num);
    //free(num);

    exit(EXIT_FAILURE);
}

/*
/lib64/ld-linux-x86-64.so.2
/usr/lib/gcc/x86_64-redhat-linux/8/../../../../lib64/crt1.o.annobin_init.c
*/