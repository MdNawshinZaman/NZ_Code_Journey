#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char name[50], thor[] ={"Thor"};
        int force = 0;
        scanf("%s %d", name, &force);

        if(strcmp(name,thor) == 0){printf("Y\n");}
        else{printf("N\n");}
    }

    return 0;
}

//used the strcmp() after a long time