#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  for (int i=1; i<=5; i++) {
    for (int j=1; j<=5; j++) {
      int x;
      cin>>x;
      if (x==1) {
        return cout<<abs(i-3) + abs(j-3), 0;
      }
    }
  }

  return 0;
}