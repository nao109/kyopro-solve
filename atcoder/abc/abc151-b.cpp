#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k,m; cin >> n >> k >> m;
  int sum=0;
  rep(i,n-1){
    int a; cin >> a;
    sum+=a;
  }
  if(n*m<=sum) cout << 0 << endl;
  else{
    if(n*m-sum<=k) cout << n*m-sum << endl;
    else cout << -1 << endl;
  }
  return 0;
}