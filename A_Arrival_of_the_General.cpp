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

  int posMin, posMax;
  int _min = INT_MAX;
  int _max = INT_MIN;

  for (int i=1; i<=n; i++) {
    int x;
    cin>>x;
    if (x<=_min) {
      _min = x;
      posMin = i;
    }

    if (x>_max) {
      _max = x;
      posMax = i;
    }
  }

  int ans;
  if (posMin > posMax) {
    ans = n-posMin + posMax-1;
  } else {
    ans = posMax-1 + n-posMin - 1;
  }

  cout<<ans;

  return 0;
}