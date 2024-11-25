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
  while (n--) {
    int d=0;
    for (int i=1; i<=3; i++) {
      int x;
      cin>>x;
      if (x==1) {
        d++;
      }
    }
    if (d>=2) {
      ans++;
    }
    
  }

  cout<<ans;

  return 0;
}