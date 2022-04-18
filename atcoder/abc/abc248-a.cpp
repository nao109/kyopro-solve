#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  set<char> s;
  rep(i,9){
    char c; cin >> c;
    s.insert(c);
  }
  rep(i,10){
    if(!s.count('0'+i)) cout << i << endl;
  }
  return 0;
}