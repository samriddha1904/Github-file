#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0; cin >> n;
        string s,u; cin >> s >> u;
        map<int,int> a,b;
        for(char i:s) a[i]++;
        for(char i:u) b[i]++;
        for(char i='a'; i<='z';i++) cnt=max(cnt,min(a[i],b[i]));
        
        cout << cnt << "\n";
    }
    return 0;
}
