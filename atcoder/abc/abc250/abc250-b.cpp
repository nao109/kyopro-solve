#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int n,a,b; cin >> n >> a >> b;
  rep(i,n){
    rep(j,a){
      rep(k,n){
        rep(l,b){
          if((i+k)%2==0) cout << '.';
          else cout << '#';
        }
      }
      cout << endl;
    }
  }
  return 0;
}