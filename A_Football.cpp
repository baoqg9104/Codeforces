#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;

  int d = 1;

  s = s + ".";

  for (int i = 1; i < s.size(); i++)
  {
    if (s[i] == s[i-1]) {
      d++;
    } else {

      if (d>=7) return cout<<"YES", 0;
      d=1;
    }
  }

  cout << "NO";

  return 0;
}