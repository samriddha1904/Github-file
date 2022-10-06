#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> arr(n); 
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    vector<int>a,b;
    int num = arr[0], flag=1;
    for(int i=0;i<n;++i)
    {
        if(arr[i]<=num && flag){
            a.push_back(arr[i]);
        }
        else
        {
            flag=0;
            b.push_back(arr[i]);
        }
    }
    if(a.size()==n){
        cout << -1 <<"\n";
        return;
    }
    cout << a.size() << "\n";
    for(int i:a)
    {
        cout << i << " ";
    }cout << "\n";
    cout << b.size() << "\n";
    for(int i:b)
    {
        cout << i << " ";
    }cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
	return 0;
}
