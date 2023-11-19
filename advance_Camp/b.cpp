#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll reverse(ll num, ll rev_num) // num , 0
{
    if(num / 10 == 0)
    {
        return num;
    }
    return rev_num + 10 * (reverse(num/10));
}

// ll print(ll num)
// {

// }

int main(void)
{
    ll a;
    cin >> a;

    ll num = 0;
    for(ll i = 0; i < a; i++)
    {
        cin >> num;
        cout << reverse(num, 0);
        //print(num);
        cout << '\n';
    }

    return 0;
}