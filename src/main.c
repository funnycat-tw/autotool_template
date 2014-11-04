#include <stdio.h>
#include "package.h"

int main(int argc, char *argv[]) {
    printf("This is main.c\n");
#ifdef __MY_PACKAGE_H__
    printf("mypackage header included.\n");
#endif
} /* main */

