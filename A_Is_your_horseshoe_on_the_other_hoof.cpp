#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a[5];
  for (int i=1; i<=4; i++) cin>>a[i];

  sort(a+1, a+1+4);

  int ans = 0;
  for (int i=2; i<=4; i++)
  {
    if (a[i] == a[i-1]) ans++;
  }

  cout<<ans;

  return 0;
}