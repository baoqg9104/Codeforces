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
  int nn = n;
  int sum = 0;
  while (n--) {
    int x;
    cin>>x;
    sum += x;
  }

  cout<<(double)sum/(nn*100)*100;

  return 0;
}