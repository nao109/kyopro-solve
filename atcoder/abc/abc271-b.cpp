#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  vector<vector<int>> a(n);
  for(int i=0; i<n; ++i){
    int l;
    cin >> l;
    for(int j=0; j<l; ++j){
      int b;
      cin >> b;
      a[i].push_back(b);
    }
  }

  for(int i=0; i<q; ++i){
    int s,t;
    cin >> s >> t;
    cout << a[s-1][t-1] << "\n";
  }
  return 0;
}