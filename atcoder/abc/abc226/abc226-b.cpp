#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  set<vector<int>> cnt;
  for(int i=0; i<n; ++i){
    int l;
    cin >> l;
    vector<int> a(l);
    for(int j=0; j<l; ++j){
      cin >> a[j];
    }
    cnt.insert(a);
  }
  cout << cnt.size() << endl;
  return 0;
}