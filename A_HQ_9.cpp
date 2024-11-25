#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  getline(cin,s);

  for (int i=0; i<s.size(); i++) {
    if (s[i] == 'H' || s[i]=='Q' || s[i]=='9') {
      return cout<<"YES",0;
    }
  }

  cout<<"NO";

  return 0;
}