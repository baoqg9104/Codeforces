#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n,m;
  cin>>n>>m;

  ll ans = 0;
  int pos = 1;
  while (m--) {
    int x;
    cin>>x;

    if (pos != x) {
      if (pos < x) ans += x-pos;
      else ans += n-pos + x;
      pos = x;
    }
  }

  cout<<ans;

  return 0;
}