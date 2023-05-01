#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    scanf("%s", s);

    int len = strlen(s), num_of_one = 0;

    for(int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            num_of_one++;
        }
    }

    if()



    return 0;
}