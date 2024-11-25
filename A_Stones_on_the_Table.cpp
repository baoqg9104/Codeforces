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

  for (int i=1; i<s.size(); i++) {
    if (s[i] == s[i-1]) {
      ans++;
    }
  }

  cout<<ans;

  return 0;
}