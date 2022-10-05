#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool isvowel(char c)
{
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int longestsubstringvowel(string s)
{
    int cnt=0,res=0;
    for(int i=0;i<s.length();++i)
    {
        if(isvowel(s[i])){cnt++;}
        else{ res=max(res,cnt); cnt=0;}
    }
    return max(res,cnt);
}
int main()
{
   string s="theatre";
   int m= longestsubstringvowel(s);
   if(m!=0){cout << "Longest substring with vowel present" << "\n";}
   else {cout << "Longest substring with vowel is not present" << "\n";}
   return 0;
}
