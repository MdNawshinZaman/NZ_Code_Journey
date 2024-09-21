#include<bis/stdc++.h>

int main(void)
{
  int nc;
  cin>>nc;
  
  while(nc--)
    {
      int n, k;
      cin >> n >> k;
      k--;
      int arr[n];
      for(int i = 0; i < n; i++)
        {
          arr[i] = 1;
        }
      int count = 0;
      int j = 0;
      while(count <= n-1)
        {
          if(j == n - 1) j = 0;
          if(arr[j] == 1)
          {
            j+=k;
            arr[j] = 0;
            j++;
            count++;
          }
          else j++;

          if(count == n-1) break;
        }
      int ans;
      for(int i = 0; i < n; i++)
        {
          if(arr[i] == 1)
          {
            ans = i+1;
          }
        }
      cout << ans;
    }
  return 0;
}
