#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void minDivisor(int n)
{
    if (prime(n)) {
        cout << 1 << " " << n - 1 << "\n";
    }
    else {
        for (int i = 2; i * i <= n; i++) {

            if (n % i == 0) {

                cout << n / i << " "
                     << n / i * (i - 1) << "\n";
                break;
            }
        }
    }
}
int main()
{
    int t;
    for(cin>>t;t--;)
    {
        int n; cin >> n;
        if(n==2) cout << n/2 << " " << n/2 << "\n";
        else minDivisor(n);
    }
    return 0;
}
