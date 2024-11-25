#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;

  int s = 240 - k;

  int ans = 0;

  for (int i = 1; i <= n; i++)
  {
    if (s - 5 * i >= 0)
    {
      ans++;
      s -= 5*i;
    }
    else
      break;
  }

  cout << ans;

  return 0;
}