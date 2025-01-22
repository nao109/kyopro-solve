#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,x; cin >> n >> x;
  vector<int> a(n); rep(i,n) cin >> a[i];
  vector<bool> k(n,false); k[x-1]=true;
  while(true){
    if(k[a[x-1]-1]) break;
    else{
      k[a[x-1]-1]=true;
      x=a[x-1];
    }
  }
  int cnt=0;
  rep(i,n){
    if(k[i]) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}