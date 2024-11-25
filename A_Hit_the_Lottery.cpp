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

  int a[5] = {1,5,10,20,100};

  int ans=0;
  for (int i=4; i>=0; i--) {
    ans += n/a[i];
    n %= a[i];
  }

  cout<<ans;

  return 0;
}