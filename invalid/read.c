#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *str = malloc(3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '!';

    printf("str: %s\n", str);
    free(str);
    return 0;
}
