#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  cin.ignore();

  while (n--)
  {
    string s;
    cin >> s;
    if (s.size() > 10)
    {
      cout << s[0] << s.size() - 2 << s[s.size()-1];
    }
    else
    {
      cout << s;
    }
    cout << '\n';
  }

  return 0;
}