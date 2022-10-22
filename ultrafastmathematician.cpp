#include<bits/stdc++.h>
using namespace std;
int main()
{
	 string s,t; cin >> s >> t;
	 for(int i=0;i<s.length();i++)
	 {
		if(s[i]==t[i]) s[i]='0';
		else s[i]='1';
	 }
	 cout << s << "\n";
return 0;
}	   
