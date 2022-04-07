#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int f(int n){
  string m=to_string(n);
  sort(m.begin(),m.end());
  string M=m; reverse(M.begin(),M.end());
  return stoi(M)-stoi(m);
}
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  int a=n;
  rep(i,k) a=f(a);
  cout << a << endl;
  return 0;
}