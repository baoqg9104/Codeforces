#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) {
  if (n==2 || n==3) return 1;
  if (n<2 || n%2==0 || n%3==0) return 0;
  for (ll i=5; i<=sqrt(n); i+=6) {
    if (n%i==0 || n%(i+2)==0) return 0;
  }
  return 1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;
  while (n--) {
    ll x;
    cin>>x;
    ll k = sqrt(x);
    if (k*k == x && isPrime(k)) cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
} 