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

  bool k = 0;
  for (int i=0; i<s.size(); i++) {
    if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
      i+=2;
      if (k) {
        k = 0;
        cout<<" ";
      }
    } else {
      cout<<s[i];
      k = 1;
    }
  }



  return 0;
}