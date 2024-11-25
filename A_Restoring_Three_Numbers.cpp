#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a[5];
  for (int i=1; i<=4; i++) cin>>a[i];

  sort(a+1, a+1+4);

  int c = (a[1]-a[2]-a[3])/-2;

  int b = a[2] - c;

  cout<<c<<' '<<b<<' '<<a[4]-b-c;

  return 0;
}