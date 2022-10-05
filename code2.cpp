#include<bits/stdc++.h>
using namespace std;
#define MAX 128
bool isvowel(char x)
{
    return (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U');
}
int Kdistinctvowel(string s, int k)
{
    int n=s.length();
    int c[MAX];
    memset(c,0,sizeof(c));
    int result=-1;
    int i,j,x;
    for(i=0,j=-1;i<n;++i)
    {
        x=s[i];
        if(isvowel(x)){
            if(++c[x]==1){k--;}
    }
    while(k<0){ 
        x=s[++j];
        if(isvowel(x))
        {
            if(--c[x]==0){++k;}
        }
    }
    if(k==0) result=max(result,i-j);
    }
    return result;
}
int main()
{
    string s="tHeracEBetwEEntheTwo";
    int k=1;
    cout << Kdistinctvowel(s,k);
    return 0;
}
