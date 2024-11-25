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
  string s;
  cin>>s;

  if (s.size() % 2 == 0) return cout<<"No", 0;

  int k = s.find('/');

  if ((s.size() + 1)/2 - 1 != k) return cout<<"No", 0;

  for (int i=0; i<k; i++) {
    if (s[i] != '1') return cout<<"No", 0;
  }  

  for (int i=k+1; i<s.size(); i++) {
    if (s[i] != '2') return cout<<"No", 0;
  }

  cout<<"Yes";

  return 0;
}