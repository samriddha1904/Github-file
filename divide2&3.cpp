#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <csignal>
#include <csetjmp>
#include <cstdarg>
#include <typeinfo>
#include <typeindex>
#include <type_traits>
#include <bitset>
#include <functional>
#include <utility>
#include <ctime>
#include <chrono>
#include <cstddef>
#include <initializer_list>
#include <tuple>
#include <new>
#include <memory>
#include <scoped_allocator>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cinttypes>
#include <limits>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <system_error>
#include <cerrno>
#include <cctype>
#include <cwctype>
#include <cstring>
#include <cwchar>
#include <cuchar>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <complex>
#include <valarray>
#include <random>
#include <numeric>
#include <ratio>
#include <cfenv>
#include <iosfwd>
#include <ios>
#include <istream>
#include <ostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <strstream>
#include <iomanip>
#include <streambuf>
#include <cstdio>
#include <locale>
#include <clocale>
#include <codecvt>
#include <regex>
#include <atomic>
#include <thread>
#include <mutex>
#include <future>
#include <condition_variable>
#include <ciso646>
#include <ccomplex>
#include <ctgmath>
#include <cstdalign>
#include <cstdbool>
using namespace std;
#define ll long long int
#define forn for(int i=0;i<n;i++)
#define forsn for(int i=1;i<=s.length();i++)
#define fori for(int i=1;i<n;i++)
#define forii for(int i=1;i*i<=n;i++)
#define vi vector<int>
#define sc cin >> arr[i]
#define sc1 cin >> v[i]
#define ss cin >> s;
#define fort for(cin >> t; t--;)
#define R return 0
int main()
{
  int n,g=0,ans=0;cin >> n;
  vi v(n);
  forn{
	  sc1;
	  g=gcd(g,v[i]);
  }
  forn{
    v[i]/=g;
    while(v[i]%2==0)
    {
      v[i]/=2;
      ans++;
    }
    while(v[i]%3==0)
    {
      v[i]/=3;
      ans++;
    }
     if(v[i]!=1) cout << -1 << "\n";
  }
  cout << ans << "\n";
R;                                                            
}
