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
  int a[m+5];
  for (int i=1; i<=m; i++) cin>>a[i];

  sort(a+1, a+1+m);

  int ans = INT_MAX;
  for (int i=n; i<=m; i++) {
    ans = min(ans, a[i]-a[i-n+1]);
  }

  cout<<ans;

  return 0;
} 