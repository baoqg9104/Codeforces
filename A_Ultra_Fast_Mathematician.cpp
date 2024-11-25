#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s1,s2;
  cin>>s1>>s2;

  for (int i=0; i<s1.size(); i++) {
    if (s1[i] != s2[i]) {
      cout<<1;
    } else {
      cout<<0;
    }
  }

  return 0;
}