#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  sort(all(a));
  for(int i=0; i<q; ++i){
    int x;
    cin >> x;
    auto it=lower_bound(all(a),x);
    cout << distance(it,a.end()) << endl;
  }
  return 0;
}