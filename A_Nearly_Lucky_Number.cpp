#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isLuckyNumber(int n)
{
  if (n == 0) return 0;

  while (n > 0)
  {
    int k = n % 10;
    if (k != 4 && k != 7)
      return 0;
    n /= 10;
  }

  return 1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll n;
  cin >> n;

  int d = 0;

  while (n > 0)
  {
    int k = n % 10;
    if (isLuckyNumber(k))
    {
      d++;
      // cout<<k<<' ';
    }
    n /= 10;
  }

  if (isLuckyNumber(d))
    cout << "YES";
  else
    cout << "NO";

    // cout<<d;

  return 0;
}