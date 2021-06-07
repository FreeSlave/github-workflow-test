#include <cstdio>
#include "build.h"

int main()
{
#ifdef __APPLE__
    printf("__APPLE__ is defined\n");
#else
    printf("__APPLE__ is not defined\n");
#endif
#ifdef XASH_APPLE
    printf("XASH_APPLE is defined\n");
#else
    printf("XASH_APPLE is not defined\n");
#endif
    return 0;
}
