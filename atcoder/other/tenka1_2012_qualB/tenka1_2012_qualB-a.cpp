#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  rep(i,127){
    if((i+1)%3==a&&(i+1)%5==b&&(i+1)%7==c) cout << i+1 << endl;
  }
  return 0;
}