#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, h;
  cin>>n>>h;
  int ans=0;
  while (n--) {
    int x;
    cin>>x;
    if (x>h) ans+=2;
    else ans++; 
  }

  cout<<ans;

  return 0;
}