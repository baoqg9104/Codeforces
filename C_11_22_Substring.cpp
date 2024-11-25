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
  cin.ignore();
  string s;
  cin>>s;

  int ans = 0;

  for (int i=0; i<n; i++) {
    if (s[i] == '/') {
      ans = max(ans, 1);
      for (int j=1; i-j >= 0 && i+j < n; j++) {
        if (s[i-j] == '1' && s[i+j] == '2') {
          ans = max(ans, 1 + j*2);
        } else break;
      }
    }
  }

  cout<<ans;

  return 0;
}