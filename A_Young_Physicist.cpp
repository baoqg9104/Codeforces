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
  int x=0, y=0, z=0;  
  while (n--) {
    int a,b,c;
    cin>>a>>b>>c;
    x+=a;
    y+=b;
    z+=c;
  }

  if (x == 0 && y==0 && z==0) {
    cout<<"YES";
  }
   else {
    cout<<"NO";
   }
  
  return 0;
}