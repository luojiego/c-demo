/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2022 05:30:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roger (罗杰), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main() {
    int* p = (int*)malloc(sizeof(int));
    char* q = (char*)p;

    free(p);
    free(q);
}
