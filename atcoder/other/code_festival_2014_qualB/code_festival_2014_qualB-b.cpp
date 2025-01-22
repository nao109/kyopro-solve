#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  int total=0;
  rep(i,n){
    int a; cin >> a;
    total+=a;
    if(total>=k){
      cout << i+1 << endl; break;
    }
  }
  return 0;
}