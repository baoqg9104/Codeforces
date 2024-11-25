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
  unordered_map<string, int> f;
  while (n--) {
    string s;
    cin>>s;
    if (f[s]==0) cout<<"OK";
    else 
    cout<<s<<f[s];
    f[s]++;
    cout<<'\n';
  }

  return 0;
}