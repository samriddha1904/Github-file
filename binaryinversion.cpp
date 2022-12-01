#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    for(cin>>t;t--;)
    {
        int n,o=0,z=0; cin >>n;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i]; a[i]==1?o++:z++;}
        int tempo=0,tempz=0;
        ll inv=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]) inv+=tempz;
            else tempz--;
        }
        tempz=z;
        ll ans=inv;
        ll beforeo=0,beforez=0,aftero=0,afterz=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]) aftero--;
            else afterz--;
            if(a[i]) ans = max(ans, inv + beforeo - afterz), beforeo++;
            else ans = max(ans, inv + afterz - beforeo), beforez++;
        }
        cout << ans << "\n";
    }
    return 0;
}
