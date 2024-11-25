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

  int d1 = 0, d2 = 0;

  for (int i=0; i<s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      d1++;
    } else {
      d2++;
    }
  }

  if (d1 >= d2) {
    for (int i=0; i<s.size(); i++) {
      s[i] = tolower(s[i]);
    }
  } else {
    for (int i=0; i<s.size(); i++) {
      s[i] = toupper(s[i]);
    }
  }

  cout<<s;
  
  return 0;
}