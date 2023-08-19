#include <stdio.h>
#include <string.h>


int main(void)
{
    int n, m;
    scanf("%d%*c%d%*c", &n, &m);

    for(int i =0 ; i < m; i++)
    {
        char action[10];
        scanf("%s%*c", action);

        if(strcmp(action, "fechou") == 0) n++;
        else n--;
    }
    printf("%d\n", n);

    return 0;
}