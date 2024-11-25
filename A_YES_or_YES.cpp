#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;
  cin.ignore();
  while (n--) {
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++) s[i] = tolower(s[i]);
    if (s == "yes") cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}