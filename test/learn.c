#include <stdio.h>

int main() {

    int n, a, b, c, d, e, f, g;
    scanf("%d",&n);

    //total n = 576
    a = n/100; //5 of 100$

    //remains 76
    b = (n- a*100)/50; //1 of 50$

    //remains 26
    c = (n- a*100 - b*50)/20; // 1 of 20$

    //remains 6
    d = (n - a*100 - b*50 - c*20)/10;

    e = (n - a*100 - b*50 - c*20 -d*10)/5;

    f = (n - a*100 - b*50 - c*20 -d*10 - e*5)/2;

    g= (n - a*100 - b*50 - c*20 -d*10 - e*5 - f*2)/1;

    printf("%d %d %d %d %d %d %d\n", a,b,c,d,e,f,g);

    return 0;
}