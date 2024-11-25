#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;
  cin.ignore();
  int ans = 0;
  while (n--) {
    string s;
    cin>>s;
    if (s.find("+")!=-1) ans++; 
    else
      ans--; 
  }

  cout<<ans;

  return 0;
}