#include <stdio.h>

int main(){
    int n,k = 0;
    scanf("%d",&n);

    char c;

    while(1){
        c = getc(stdin);
        if(c=='\n') break;
        if(c=='!') ++k;
    }

    int ans = 1;

    while(n>0){
        ans *= n;
        n -= k;
    }

    printf("%d\n",ans);

    return 0;
}