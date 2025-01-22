#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,d; cin >> a >> b >> c >> d;
  if(a==c){
    if(b<=c) cout << "Takahashi\n";
    else cout << "Aoki\n";
  }
  else if(a<b) cout << "Takahashi\n";
  else cout << "Aoki\n";
  return 0;
}