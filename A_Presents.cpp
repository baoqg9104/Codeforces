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
  for (int i=1; i<=n; i++) {
    int x;
    cin>>x;
    a[x] = i;
  }

  for (int i=1; i<=n; i++) {
    cout<<a[i]<<' ';
  }

  return 0;
}