#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a,b;
  cin>>a>>b;
  
  if (a>b) swap(a,b);
  cout<<a<<' '<<(b-a)/2;

  return 0;
}