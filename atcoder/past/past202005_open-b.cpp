#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<int> p(m,n);
  vector<vector<int>> solve(n);
  for(int i=0; i<q; ++i){
    int c,x;
    cin >> c >> x;
    --x;
    if(c==1){
      int sum=0;
      for(int &i:solve[x]) sum+=p[i];
      cout << sum << endl;
    }
    else{
      int y;
      cin >> y;
      --y;
      solve[x].push_back(y);
      --p[y];
    }
  }
  return 0;
}