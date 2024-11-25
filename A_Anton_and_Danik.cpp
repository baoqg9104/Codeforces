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

  int d1=0, d2=0;
  for (int i=0; i<n; i++) {
    if (s[i]=='A') d1++;
    else d2++;
  }

  if (d1>d2) {
    cout<<"Anton";
  } else if (d1<d2) {
    cout<<"Danik";
  } else {
    cout<<"Friendship";
  }

  return 0;
}