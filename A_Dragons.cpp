#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int s,n;
  cin>>s>>n;
  
  pair<int,int> a[n+5];

  for (int i=1; i<=n; i++) cin>>a[i].first>>a[i].second;

  sort(a+1, a+1+n);

  for (int i=1; i<=n; i++) {
    if (s <= a[i].first) return cout<<"NO",0;
    s += a[i].second;
  }

  cout<<"YES";

  return 0;
} 