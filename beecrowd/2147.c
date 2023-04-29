#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
         char word[10001];
         scanf("%s", word);

         int len = strlen(word);
         float sec = len * 0.01;

         printf("%.2f\n", sec);
    }

    return 0;
}