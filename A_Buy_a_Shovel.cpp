#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int k, r;
  cin >> k >> r;

  int ans = 1;
  int kk = k;
  while (kk % 10 != r && kk%10 != 0)
  {
    ans++;
    kk = k * ans;
  }

  cout << ans;

  return 0;
}