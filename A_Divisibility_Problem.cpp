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
    int a,b;
    cin>>a>>b;
    int aa = a;
    
    a = ceil((double)a/b)*b;

    cout<<a-aa<<'\n';
  }

  return 0;
}