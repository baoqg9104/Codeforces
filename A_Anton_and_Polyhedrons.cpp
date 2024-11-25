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
  cin.ignore();
  int ans=0;
  while (n--) {
    string s;
    cin>>s;
    if (s=="Tetrahedron") ans+=4;
    else 
    if (s=="Cube") ans+=6;
    else 
    if (s=="Octahedron") ans+=8;
    else 
    if (s=="Dodecahedron") ans+=12;
    else 
    if (s=="Icosahedron") ans+=20;
  }

  cout<<ans;

  return 0;
}