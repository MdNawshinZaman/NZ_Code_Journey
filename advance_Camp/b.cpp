#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll reverse(ll num, ll rev_num) // num , 0
{
    if(num == 0)
    {
        return rev_num;
    }
    else
    {
        rev_num = (rev_num * 10) + num % 10;
        return reverse(num/10, rev_num);
    }
}

void print(ll num)
{
    if()
    {
    }
}

int main(void)
{
    ll a;
    cin >> a;

    ll num = 0;
    for(ll i = 0; i < a; i++)
    {
        cin >> num;
        print(reverse(num, 0));
        cout << '\n';
    }

    return 0;
}