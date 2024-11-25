#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  getline(cin, s);

  vector<bool> f('z' + 1, 0);
  int ans=0;
  for (int i=0; i<s.size(); i++) {
    if (isalpha(s[i]) && !f[s[i]]) {
      ans++;
      f[s[i]] = 1;
    }
  }

  cout<<ans;

  return 0;
}