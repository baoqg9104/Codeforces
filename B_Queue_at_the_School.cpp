#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n,t;
  cin>>n>>t;
  cin.ignore();
  string s;
  cin>>s;
  while (t--) {
    for (int i=1; i<n; i++) {
      if (s[i-1] == 'B' && s[i] == 'G') {
        swap(s[i-1], s[i]);
        i++;
      }
    }
  }

  cout<<s;
  
  return 0;
}