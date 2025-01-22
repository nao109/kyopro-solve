#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int cnt=3,num=1; rep(i,n) num*=3;
  vector<string> a(num);
  rep(i,n){
    rep(j,cnt){
      int ch=num/3*j;
      for(int i=ch; i<ch+num/3; ++i) a[i].pb('a'+j%3);
    }
    num/=3; cnt*=3;
  }
  
  cerr << cnt << endl;
  //-------------------------------
  rep(i,cnt/3) cout << a[i] << endl;
  return 0;
}