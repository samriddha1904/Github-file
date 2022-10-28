#include <bits/stdc++.h>
#define ll long long int
using namespace std;
long long mod = 1e9 + 7;
long long expo(ll a, ll n) {
   if (a < 0ll || n < 0ll)   return 0;
   ll res = 1ll;
   while (n > 0) {
      if (n & 1)   res = (res * a) % mod;
      a = (a * a) % mod;
      n = n >> 1;
   }
   return res % mod;
}
void solve() {
   int n;
   string s;
   cin >> n >> s;
   array <char, 2> c = {'0', '1'};
   if (s[0] == '0')
      swap(c[0], c[1]);
   for (int i = 0; i < n; i++) {
      if (s[i] == c[0]) {
         for (int j = i; j <= n; j++) {
            if (j == n || s[j] == c[1]) {
               int m = n - i, ans = 0;
               string a = s.substr(i, m);
               string b = s.substr(max(0, i - (j - i)), m);
               for (int i = 0; i < (int)a.length(); i++) {
                  if (a[i] - '0' ^ b[i] - '0')
                     (ans += expo(2, m - i - 1)) %= mod;
               }
               cout << ans << '\n';
               return;
            }
         }
         break;
      }
   }
   cout << "0\n";
}
int main() {
   ios::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}
