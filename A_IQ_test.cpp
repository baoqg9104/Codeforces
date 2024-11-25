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
  int d1, d2;
  int k1=0, k2=0;
  for (int i=1; i<=n; i++) {
    int x;
    cin>>x;
    if (x%2!=0) {
      d1=i;
      k1++;
    }
    else {
      d2=i;
      k2++;
    }
  }

  if (k1==1) cout<<d1;
  else cout<<d2;

  return 0;
}