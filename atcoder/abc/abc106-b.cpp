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
  vector<int> a({105,135,165,189,195});
  int cnt=0;
  rep(i,n){
    rep(j,5){
      if(i+1==a[j]) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}