#include <stdlib.h>
#include <stdio.h>

/* Use my_calloc ! */

int main(void)
{
    char *str = malloc(3);
    str[0] = 'O';
    str[1] = 'K';

    printf("str: %s\n", str);
    free(str);
    return 0;
}
