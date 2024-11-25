#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a,b,c,d,n;
  cin>>a>>b>>c>>d>>n;

  int ans=0;
  for (int i=1; i<=n; i++) {
    if (i%a==0 || i%b==0 || i%c==0 || i%d==0) {
      ans++;
    }
  }
  cout<<ans;

  return 0;
}