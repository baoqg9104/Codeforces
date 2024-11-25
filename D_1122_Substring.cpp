#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool f[200005];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;
  int a[n+5];
  for (int i=1; i<=n; i++) {
    cin>>a[i];
  }

  int ans = 0;
  int k = 1;



  for (int i=2; i<=n; i++) {
    if (a[i] == a[i-1] && f[a[i]] == 0) {
      ans = max(ans, i-k+1);
      f[a[i]] = 1;
    } else
    if (a[i-1] != a[i-2]) 
    {
      k = i;
      fill(f, f+200005, 0);
    }

  }

  cout<<ans;

  return 0;
}