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
  pair<int, int> a[n+5];
  for (int i=1; i<=n; i++) cin>>a[i].first>>a[i].second;

  int ans=0;
  for (int i=1; i<=n; i++)
  for (int j=i+1; j<=n; j++) {
    if (a[i].second == a[j].first) ans++;
    if (a[i].first == a[j].second) ans++;
  }

  cout<<ans;

  return 0;
}