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
    int a,b;
    cin>>a>>b;
    if (b-a>=2) ans++;
  }
  cout<<ans;

  return 0;
}