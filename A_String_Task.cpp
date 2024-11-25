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

  string x = "aoyeuiAOYEUI";

  string ans = "";

  for (int i = 0; i < s.size(); i++)
  {
    if (x.find(s[i]) != -1)
    {
      
    } else {
      s[i] = tolower(s[i]);
      ans = ans + '.' + s[i]; 
    }

    
  }

  cout<<ans;

  return 0;
}