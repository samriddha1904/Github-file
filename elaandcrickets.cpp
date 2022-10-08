#include<bits/stdc++.h>
using namespace std;
int n;
int x[3], y[3];
int u, v;

pair<int,int> centralSquare() {
  int a = (x[0] == x[1]) ? x[0] : x[2];
  int b = (y[0] == y[1]) ? y[0] : y[2];
  return {a, b};
}

void execute()
{
  cin>>n;
  for (int i=0; i<3; i++) cin>>x[i]>>y[i];
  cin>>u>>v;

  int cx = centralSquare().first, cy = centralSquare().second;

  if ((cx == 1 || cx == n) && (cy == 1 || cy == n)) { // "corner" case, literally
    // the crickets can only reach coordinates within the edges that already contains at least 2 crickets,
    // which contains the centralSquare of the L
    cout << ((u == cx || v == cy) ? "YES\n" : "NO\n");
  } else {
    if ((cx + cy) % 2 == (u + v) % 2) {
      cout << (cx % 2 == u % 2 ? "YES\n" : "NO\n"); 
    } else { // can be prove to always reach, since we have ways to align 2 crickets in the same diagonal as target
      cout << "YES\n"; 
    }
  }
}
int main()
{
  int t;
  cin >>t;
  while(t--){
  execute();
  }
  return 0;
}
