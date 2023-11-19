#include<bits/stdc++.h>
using namespace std;

int max(int a, int b, int c, int d)
{
    return a > b? = a:b;
}


int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    //cout << a <<' ' << b << ' ' << c << ' ' << d << '\n';

    int m = max(a, b, c, d);

    cout << m << '\n';

    return 0;
}