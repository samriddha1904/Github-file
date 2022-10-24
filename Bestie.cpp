#include<bits/stdc++.h>
using namespace std;
#define int long long int
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
         int chek=0;
        
        for (int i = 1; i < n+1; i++) {
          cin>>v[i];
          if(v[i]==1){
              chek=1;
          }
        }
        int val=v[1];
        for(int i=2;i<=n;i++){
            val=gcd(val,v[i]);
        }
        if(chek==1 || val==1){
            cout<<0<<endl;
            continue;
        } 
       int ans=n;
        for(int i=n;i>=1;i--){
            int x=gcd(i,v[i]);
            int y=gcd(x,val);
            if(y==1){
                ans=n-i+1;
                break;
            }
        }
        vector<int>g(n+1);
        for(int i=1;i<=n;i++){
            g[i]=gcd(i,v[i]);
        }
        reverse(g.begin()+1,g.end());
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int x1=gcd(g[i],g[j]);
                if(x1==1){
                    ans=min(ans,i+j);
                }
            }
        }
        cout<<ans<<endl; 
    }
    return 0;
