#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0,mx=0;cin >> n;
        char c; cin >> c;
        string s; cin >> s; s+=s;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==c)
           { 
			   cnt=0;
            
            while(s[i]!='g' && i<s.size())
            {
                cnt++;
                i++;
            }
            if(cnt>mx) mx=cnt;
        }
	}
        cout << mx << "\n";
    }
    return 0;
}		
			
	
