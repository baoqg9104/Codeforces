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
  char a[n+5][m+5];
  int d=0;
  for (int i=1; i<=n; i+=2) {
    for (int j=1; j<=m; j++) {
      a[i][j] = '#';
      a[i+1][j] = '.';
    }
    d++;
    if (d%2 != 0) a[i+1][m] = '#';
    else a[i+1][1] = '#';
  }

  for (int i=1; i<=n; i++)
  {
    for (int j=1; j<=m; j++) cout<<a[i][j];
    cout<<'\n';
  }

  return 0;
}