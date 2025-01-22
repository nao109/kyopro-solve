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
  vector<int> a(n+1); rep(i,n) cin >> a[i+1];
  for(int i=1; i<=n; ++i){
    int x=i,j=1;
    while(true){
      if(a[x]!=i){x=a[x]; ++j;}
      else{cout << j; break;}
    }
    if(i<n) cout << " ";
  }
  cout << endl;
  return 0;
}