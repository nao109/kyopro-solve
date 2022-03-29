#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  vector<int> a(n); int cnt=0;
  rep(i,n){
    cin >> a[i]; cnt+=a[i];
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  rep(i,m){
    if(4*m*a[i]<cnt){
      cout << "No\n"; return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}