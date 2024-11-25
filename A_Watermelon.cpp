#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;

  if (n%2==0 && n>2) {
    cout<<"YES";
  } else {
    cout<<"NO";
  }

  return 0;
}