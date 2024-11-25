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
  while (n--) {
    int x;
    cin>>x;
    if (x == 1) return cout<<"HARD", 0;
  }
  
  cout<<"EASY";
  return 0;
}