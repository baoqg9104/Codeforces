#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  vector<int> f(1000, 0);
  for (char i : s3)
  {
    f[i]++;
  }

  for (char i : s2)
  {
    f[i]--;
  }

  for (char i : s1)
  {
    f[i]--;
  }

  for (char i='A'; i<='Z'; i++) 
  {
    if (f[i]!=0) return cout<<"NO", 0;
  }

  cout<<"YES";

  return 0;
}