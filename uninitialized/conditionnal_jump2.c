#include <stdlib.h>
#include <stdio.h>

typedef struct vector_s
{
    int x;
    int y;
} vector_t;

int main(void)
{
    vector_t vector;

    printf("vector: (%d, %d)\n", vector.x, vector.y);
    return 0;
}

