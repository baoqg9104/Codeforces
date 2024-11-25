#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll a,b,c;
  cin>>a>>b>>c;

  a = ceil((double)a/c);
  b = ceil((double)b/c);

  cout<<a*b;

  return 0;
}