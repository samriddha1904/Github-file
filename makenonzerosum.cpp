#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 
ll t;
for(cin>>t;t--;){
 
 
ll n;
cin>>n;
 
vector<ll>a(n);
 
for(int i=0;i<n;i++)
cin>>a[i];
 
 
if(n%2){
    cout<<-1<<"\n";
    continue;
}
 
vector<pair<ll,ll>>ans;
 
for(ll i=0;i<n;i+=2){
    if(a[i]==a[i+1]){
        ans.push_back({i+1,i+2});
    }
    else
    ans.push_back({i+1,i+1}),ans.push_back({i+2,i+2});
}
 
cout<<ans.size()<<"\n";
for(auto [l,r]:ans)
cout<<l<<" "<<r<<"\n";
}
return 0;
}
