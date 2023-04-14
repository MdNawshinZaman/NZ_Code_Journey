#include <stdio.h>

int main(void)
{
    int x, y, start_num = 1, start_position = 1;
    scanf("%d %d", &x, &y);

    for(int i = 0; i < y; i++)
    {
        printf("%d", start_num);
        start_num++;
        if(start_position < x){printf(" "); start_position++;}
        else{start_position = 1; printf("\n");}
    }

    return 0;
}