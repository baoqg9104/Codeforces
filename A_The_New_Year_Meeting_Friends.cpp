#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a[4];
  for (int i=1; i<=3; i++) cin>>a[i];

  sort(a+1, a+1+3);

  cout<<a[2]-a[1] + a[3]-a[2];

  return 0;
} 