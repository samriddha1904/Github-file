#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, ans, z1, o1, z2, o2, s;
    cin>>t;
    for(;t--;)
    {
        cin>>n;
        z1=z2=o1=o2=0;
        ll a[n], b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            o1++;
            else
            z1++;
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]==1)
            o2++;
            else
            z2++;
        }
        ans=abs(z1-z2);
        s=0;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                s++;
            }
        }
        if(s>ans){
            cout<<ans+1<<"\n";
        }else{
            cout<<ans<<"\n";
		}
    }
}
