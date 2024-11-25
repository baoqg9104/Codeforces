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
    int a[4];
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1, a+1+3);
    if (a[1]+a[2]==a[3]) cout<<"YES\n";
    else cout<<"NO\n";    
  }

  return 0;
}