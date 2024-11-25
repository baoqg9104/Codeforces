#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n,a,b,c;
  cin>>n>>a>>b>>c;

  int ans = INT_MIN;
  for (int i=0; i<=n; i++) 
  for (int j=0; j<=n; j++) {
    int k = n-a*i-b*j;
    if (k == 0) 
      ans = max(ans, i+j);
    else
    if (k>0 && k%c == 0)
      ans = max(ans, i+j+k/c);
  }

  cout<<ans;
  
  return 0;
}