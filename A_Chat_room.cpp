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

  string x = "hello";
  int k=0;
  for (int i=0; i<s.size(); i++) {
    if (s[i]==x[k]) {
      k++;
    }
  }

  if (k==x.size()) cout<<"YES";
  else cout<<"NO";

  return 0;
}