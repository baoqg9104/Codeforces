#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll a, ll b) {
  if (b == 0) return 1;
  ll t = solve(a, b/2);
  if (b%2==0) 
    return t*t%100;
  else 
    return t*t*a%100;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll n;
  cin>>n;
  
  ll ans = solve(5,n);

  if (ans == 0) cout<<"00";
  else
    cout<<ans;
  return 0;
}