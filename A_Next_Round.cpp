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

  int a[n + 5];
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  if (a[1] == 0)
    return cout << 0, 0;

  int ans = k;

  if (a[k] == 0) {
    for (int i = k; i >= 1; i--)
    {
      if (a[i] == 0)
        ans--;
      else
        break;
    }
  }
  else {
    for (int i = k + 1; i <= n; i++)
    {
      if (a[i] == a[i - 1])
        ans++;
      else
        break;
    }
  }

  cout << ans;

  return 0;
}