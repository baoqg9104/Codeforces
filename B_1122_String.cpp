#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin>>s;

  int n = s.size();
  if (n % 2 != 0) return cout<<"No", 0;

  for (int i=1; i<=n/2; i++) {
    if (s[2*i-2] != s[2*i-1]) return cout<<"No", 0;
  }

  sort(s.begin(), s.end());

  s = s + ".";

  int d=1;
  for (int i=1; i<n+1; i++) {
    if (s[i] == s[i-1]) d++;
    else {
      if (d!=2) return cout<<"No", 0;
      d=1;
    }
  }

  cout<<"Yes";

  return 0;
}