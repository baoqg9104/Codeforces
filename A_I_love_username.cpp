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
  n--;
  int x;
  cin>>x;
  int _min = x;
  int _max = x;
  int ans = 0;
  while (n--) {
    int x;
    cin>>x;
    if (x<_min) {
      ans++;
      _min = x;
    } else if (x>_max) {
      ans++;
      _max = x;
    }
  }

  cout<<ans;

  return 0;
}