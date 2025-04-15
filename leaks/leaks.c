#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *index = malloc(sizeof(int));

    *index = 0;
    for (*index = 0; *index < 10; (*index)++)
    {
        printf("index: %d\n", *index);
    }
    return 0;
}