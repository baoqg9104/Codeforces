#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll n;
  cin>>n;
  
  ll ans = n/2;

  if (n%2 != 0) {
    ans -= n;
  }

  cout<<ans;

  return 0;
}