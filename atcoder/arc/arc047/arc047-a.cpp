#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,l; string s; cin >> n >> l >> s;
  int open=1,cnt=0;
  rep(i,n){
    if(s[i]=='+') ++open;
    else --open;
    if(open>l){
      ++cnt; open=1;
    }
  }
  cout << cnt << endl;
  return 0;
}