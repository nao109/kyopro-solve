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
  vector<bool> ch(2001,false);
  rep(i,n){
    int a; cin >> a;
    ch[a]=true;
  }
  rep(i,2001){
    if(!ch[i]){
      cout << i << endl; break;
    }
  }
  return 0;
}