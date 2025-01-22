#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n; string s; cin >> n >> s;
  int ans=0;
  rep(i,n-2){
    if(s.substr(i,3)=="ABC") ++ans;
  }
  cout << ans << endl;
  return 0;
}