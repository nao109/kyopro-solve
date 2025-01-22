#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string a,b; cin >> a >> b;
  int sa=0,sb=0;
  rep(i,3){
    sa+=a[i]-'0';
    sb+=b[i]-'0';
  }
  cout << max(sa,sb) << endl;
  return 0;
}