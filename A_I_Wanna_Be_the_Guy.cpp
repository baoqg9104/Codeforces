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
  
  vector<bool> f(n+1, 0);


  int p;
  cin>>p;
  while (p--) {
    int x;
    cin>>x;
    if (!f[x]) {
      n--;
      f[x] = 1;
    }
  }

  int q;
  cin>>q;
  while (q--) {
    int x;
    cin>>x;
    if (!f[x]) {
      n--;
      f[x] = 1;
    }
  }

  if (n==0) {
    cout<<"I become the guy.";
  } else {
    cout<<"Oh, my keyboard!";
  }

  return 0;
}