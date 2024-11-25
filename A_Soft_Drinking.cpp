#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int m1 = k*l/nl;
  int m2 = c*d;
  int m3 = p/np;

  cout<<min({m1, m2, m3})/n;

  return 0;
}