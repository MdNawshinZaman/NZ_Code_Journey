#include<bits/stdc++.h>
using namespace std;
// #define long long int long long int

long long int digit_count (long long int num)
{
    long long int n = 0;
    while(num != 0)
    {
        num /= 10;
        n++;
    }
    return n;
}
long long int reverse(long long int num, long long int rev_num) // num , 0
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

void print(long long int num)
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
    long long int a;
    cin >> a;

    long long int num = 0;
    for(long long int i = 0; i < a; i++)
    {
        cin >> num;
        if(num == 0)
        {
            cout << 0 << ' ' <<'\n';
            continue;
        }


        long long int rev = reverse(num, 0);
        print(rev);

        for(long long int j = 0 ; j < digit_count(num) - digit_count(rev); j++)
        {
            cout << 0 << ' ';
        }
        cout << '\n';
    }

    return 0;
}