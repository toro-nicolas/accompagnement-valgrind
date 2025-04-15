#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(4);

    free(ptr);
    free(ptr);
    return 0;
}
