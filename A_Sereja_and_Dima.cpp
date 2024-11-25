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
  int a[n+5];
  for (int i=1; i<=n; i++) cin>>a[i];

  int i=1, j=n;
  int sum1=0, sum2=0;
  int k = 1;
  while (i<=j) {
    if (a[i]>a[j]) {
      if (k%2!=0)
        sum1 += a[i];
      else 
        sum2 += a[i];
      i++;
    } else {
      if (k%2!=0)
        sum1 += a[j];
      else 
        sum2 += a[j];
      j--;
    }
    k++;
  }

  cout<<sum1<<' '<<sum2;
  
  return 0;
}