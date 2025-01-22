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
  bool isprime=true;
  for(int i=2; i*i<=n; ++i){
    if(n%i==0) isprime=false;
  }
  if(isprime) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}