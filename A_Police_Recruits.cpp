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

  int ans = 0;
  int s=0;
  while (n--) {
    int x;
    cin>>x;
    if (x==-1) {
      if (s==0) ans++;
      else s--;
    } else s+=x;
  }
  cout<<ans;

  return 0;
} 