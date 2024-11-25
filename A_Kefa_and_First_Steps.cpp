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
  int a[n+5];
  for (int i=1; i<=n; i++) cin>>a[i];

  int d=1;
  int ans = INT_MIN;
  for (int i=2; i<=n; i++) {
    if (a[i] >= a[i-1]) d++;
    else {
      ans = max(ans, d);
      d=1;
    } 
  }
  ans = max(ans, d);
  cout<<ans;

  return 0;
}