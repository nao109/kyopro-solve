#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int l,h,n; cin >> l >> h >> n;
  int a;
  rep(i,n){
    cin >> a;
    if(a<l) cout << l-a << "\n";
    else if(a>h) cout << "-1\n";
    else cout << "0\n";
  }
  return 0;
}