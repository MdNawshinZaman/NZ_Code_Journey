#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char str[9] = "1101011";
    printf("%c\n", (char)strtoll(str, NULL, 2));

    return 0;
}