#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char *str = malloc(3);

    str[0] = 'O';
    str[1] = 'K';
    str[2] = '!';
    str[3] = '\0';
    for (int i = 0; i < 3; i++)
    {
        write(1, &str[i], 1);
    }
    write(1, "\n", 1);
    free(str);
    return 0;
}

