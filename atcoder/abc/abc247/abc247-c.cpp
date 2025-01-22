#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<vector<int>> s(16);
  s[0]={1};
  rep(i,n-1){
    s[i+1].insert(s[i+1].end(),s[i].begin(),s[i].end());
    s[i+1].pb(i+2);
    s[i+1].insert(s[i+1].end(),s[i].begin(),s[i].end());
  }
  ll len=s[n-1].size();
  cerr << len << endl;
  rep(i,len){
    cout << s[n-1][i];
    if(i<len-1) cout << " ";
    else cout << endl;
  }
  return 0;
}