/*
 * =====================================================================================
 *
 *       Filename:  myfree.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2022 05:25:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roger (罗杰), 
 *   Organization:  
 *
 * =====================================================================================
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void free(void *ptr) {
    void(*freep)() = NULL;
    printf("ready to do free: %p\n", ptr);
    freep = dlsym(RTLD_NEXT, "free");
    freep(ptr);
    printf("free done: %p\n", ptr);
}
// gcc -shared -fpic -o myfree.so myfree.c -ldl

