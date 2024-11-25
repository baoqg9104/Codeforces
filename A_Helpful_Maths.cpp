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

  vector<int> a;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != '+')
    {
      a.push_back(s[i] - 48);
    }
  }

  sort(a.begin(), a.end());

  for (int i=0; i<a.size()-1; i++) {
    cout<<a[i]<<'+';
  }

  cout<<a[a.size()-1];

  return 0;
}