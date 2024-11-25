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

  bool check = 1;
  for (int i=1; i<s.size(); i++) {
    if (islower(s[i])) {
      check = 0;
      break;
    }
  }

  if (islower(s[0]) && check) {
    s[0] = toupper(s[0]);
    for (int i=1; i<s.size(); i++) {
      s[i] = tolower(s[i]);
    }
  } else if (isupper(s[0]) && check) {
    for (int i=0; i<s.size(); i++) {
      s[i] = tolower(s[i]);
    }
  }

  cout<<s;

  return 0;
}