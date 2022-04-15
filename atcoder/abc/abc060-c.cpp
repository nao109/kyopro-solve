#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n,T; cin >> n >> T;
  vector<int> t(n); rep(i,n) cin >> t[i];
  int sum=0;
  rep(i,n-1){
    if(t[i]+T<=t[i+1]) sum+=T;
    else if(t[i+1]<t[i]+T) sum+=(t[i+1]-t[i]);
  }
  sum+=T;
  cout << sum << endl;
  return 0;
}