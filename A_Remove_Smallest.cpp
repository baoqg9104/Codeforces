#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    int a[n+5];
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+1+n);
    bool check = 1;
    for (int i=2; i<=n; i++) {
      if (a[i]-a[i-1]>1) {
        check = 0;
        break;
      }
    }

    if (check) cout<<"YES\n";
    else cout<<"NO\n";
  }
  
  return 0;
}