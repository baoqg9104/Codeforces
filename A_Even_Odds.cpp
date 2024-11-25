#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int a, int b) {
  return a>b;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll n,k;
  cin>>n>>k;

  ll ans;
  if (k>(n+1)/2) {
    k -= (n+1)/2;
    ans = 2*k;
  } else {
    ans = 2*k-1;
  }

  cout<<ans;

  return 0;
}