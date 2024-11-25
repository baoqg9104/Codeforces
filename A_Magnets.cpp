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
  int ans = n;
  n--;
  char a,b;
  cin>>a>>b;
  while (n--) {
    char x,y;
    cin>>x>>y;
    if (x != b) ans--;
    a = x;
    b = y;
  }
  cout<<ans;

  return 0;
}