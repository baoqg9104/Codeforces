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

  vector<bool> f('z' + 1, 0);

  for (int i=0; i<n; i++) {
    f[tolower(s[i])] = 1;
  }

  for (int i='a'; i<='z'; i++) {
    if (!f[i]) return cout<<"NO",0;
  }
  cout<<"YES";

  return 0;
}