#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int a, int b) {
  return a>b;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;

  int a[n+5];
  int sum = 0;
  for (int i=1; i<=n; i++) {
    cin>>a[i];
    sum += a[i];
  }

  sort(a+1, a+1+n, cmp);

  int s = 0;
  for (int i=1; i<=n; i++) {
    s += a[i];
    if (s>(double)sum/2) return cout<<i, 0;
  }

  return 0;
}