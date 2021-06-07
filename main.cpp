#include <cstdio>

int main()
{
#ifdef __APPLE__
    printf("__APPLE__ is defined\n");
#else
    printf("__APPLE__ is not defined\n");
#endif
    return 0;
}
