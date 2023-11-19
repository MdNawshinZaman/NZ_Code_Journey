#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a > b? a : b;
}

int greatest(int a, int b, int c, int d)
{
    return max(a, max(b, max(c,d)));
}


int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    //cout << a <<' ' << b << ' ' << c << ' ' << d << '\n';

    int m = greatest(a, b, c, d);

    cout << m << '\n';

    return 0;
}