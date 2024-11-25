#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n) {
  while (n>0) {
    int k = n%10;
    if (k != 4 && k != 7) return 0;
    n/=10;
  }

  return 1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;
  for (int i=1; i<=n; i++) {
    if (check(i) && n%i==0) {
      return cout<<"YES", 0;
    }
  }

  cout<<"NO";

  return 0;
}