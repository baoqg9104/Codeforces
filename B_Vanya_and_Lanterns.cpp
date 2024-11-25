#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n,l;
  cin>>n>>l;
  int a[n+5];
  for (int i=1; i<=n; i++) cin>>a[i];

  sort(a+1,a+1+n);

  a[0] = 0;
  a[n+1] = l;
  int ans = INT_MIN;
  for (int i=2; i<=n; i++) {
    ans = max(ans, a[i] - a[i-1]);
  }

  cout<<fixed<<setprecision(10)<<max({(double)ans/2, (double)a[1], (double)l-a[n]});

  return 0;
}