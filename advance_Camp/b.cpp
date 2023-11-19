#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll digit_count (ll num)
{
    ll n = 0;
    while(num != 0)
    {
        num /= 10;
        n++;
    }
    return n;
}
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
    if(num == 0)
    {
        return;
    }
    else
    {
        cout << num % 10 << ' ';
        print(num/10);
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
        ll rev = reverse(num, 0);
        print(rev);

        for(ll i = 0 ; i < digit_count(num) - digit_count(rev); i++)
        {
            cout << 0 << ' ';
        }
        cout << '\n';
    }

    return 0;
}