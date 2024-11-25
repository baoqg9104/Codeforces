#include <bits/stdc++.h>
using namespace std;
#define ll long long
  bool f[1000];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin>>s;


  int d = 0;

  for (int i=0; i<s.size(); i++) {
    if (!f[s[i]]) {
      d++;
    }
    f[s[i]] = 1;
  }

  if (d%2==0) {
    cout<<"CHAT WITH HER!";
  } else {
    cout<<"IGNORE HIM!";
  }
  return 0;
}