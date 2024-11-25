#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll k,n,w;
  cin>>k>>n>>w;

  cout<<max(0ll, k*(1+w)*w/2 - n);
  return 0;
}