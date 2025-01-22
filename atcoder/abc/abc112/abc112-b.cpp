#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n,t; cin >> n >> t;
  vector<pair<int,int>> ct;
  rep(i,n){
    int ci,ti;
    cin >> ci >> ti;
    if(ti<=t){
      ct.push_back({ci,ti});;
    }
  }
  if(ct.size()>0){
    sort(ct.begin(),ct.end());
    cout << ct[0].first << endl;
  }
  else cout << "TLE\n";
  return 0;
}