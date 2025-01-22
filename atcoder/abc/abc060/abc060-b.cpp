#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int a,b,c; cin >> a >> b >> c;
  rep(i,1000){
    if((a*i)%b==c){cout << "YES\n"; return 0;}
  }
  cout << "NO\n";
  return 0;
}