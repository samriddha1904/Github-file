#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k; cin >> n >> m >> k;
  bitset<32> arr[m+10];
  for(int i=0;i<m+1;++i)
  {
    int x; cin >> x;
    arr[i]=x;
  }
  int ans=0;
  for(int i=0;i<m;++i)
  {
    int diff=0;
    for(int j=0;j<32;++j)
    {
       if(arr[m][j]!=arr[i][j]) diff++;
    }
    if(diff<=k) ans++;
  }
  cout << ans << "\n";
  return 0;
}
