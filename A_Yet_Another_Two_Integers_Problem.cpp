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
  while (n--) {
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    if (a==b) {
      cout<<"0\n";
      continue;
    }

    int ans = ceil((b-a)/10.0);

    cout<<ans<<'\n';
  }
  
  return 0;
}