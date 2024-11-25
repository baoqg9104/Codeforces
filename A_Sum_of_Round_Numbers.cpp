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
    int s=1;
    vector<int> a;
    while (n>0) {
      int k=n%10;
      if (k!=0) {
        a.push_back(k*s);
      }
      s*=10;
      n/=10;
    }
    cout<<a.size()<<'\n';
    for (int i:a) cout<<i<<' ';
    cout<<'\n';
  }

  return 0;
}