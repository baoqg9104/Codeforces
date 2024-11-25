#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n)
{
  vector<bool> f(10, 0);
  while (n > 0)
  {
    int k = n%10;
    if (f[k]) return 0;
    f[k] = 1;
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
  cin >> n;
  n++;
  while (!check(n))
    n++;
  cout << n;
  return 0;
}