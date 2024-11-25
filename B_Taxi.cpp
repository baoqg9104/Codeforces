#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;
  vector<int> a(5, 0);
  for (int i=1; i<=n; i++) {
    int x;
    cin>>x;
    a[x]++;
  }

  int ans = a[4];

  ans += a[3];

  a[1] = max(0, a[1] - a[3]);

  ans += a[2]/2;

  a[2] %= 2;

  if (a[2] > 0) {
    ans++;
    a[1] = max(0, a[1] - 2);
  }

  ans += a[1]/4;

  a[1] %= 4;

  if (a[1] > 0) ans++;

  cout<<ans;

  return 0;
}